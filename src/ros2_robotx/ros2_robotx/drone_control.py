#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Nov  4 11:19:35 2022

@author: grant
"""
import sys
sys.path.append(r'/home/grant/miniconda3/lib/python3.8/site-packages')
sys.path.append(r'/opt/ros/foxy/lib/python3.8/site-packages')

import numpy as np

import math
import time

from cv2 import VideoCapture
from cv_bridge import CvBridge

import rclpy
from rclpy.node import Node

from geometry_msgs.msg import Twist, TwistWithCovarianceStamped
from sensor_msgs.msg import Image, NavSatFix
from std_msgs.msg import Bool, Int16, UInt8

from dronekit import connect, VehicleMode, LocationGlobalRelative, LocationGlobal, APIException

import dk_functs_dict as dk
import dictonary_gen as dicgen
    
class drone_control(Node):
    def __init__(self):
        super().__init__('drone_control')
        self.connection_string = "udp:127.0.0.1:14550"
        print('connecting to drone')
        self.vehicle = connect(self.connection_string, wait_ready=True)
        self.spawn_height = dk.get_true_abs_height(self.vehicle, 0)
        self.takeoff_height = 5 #m 
        self.flight_height = self.takeoff_height
        self.land_height = 10
        self.home = self.vehicle.location.global_relative_frame
        self.RF_height = self.vehicle.rangefinder.distance
        
        
        self.time_last = 0.0
        self.time_to_wait = 0.1
        
        # set canera parameters
        self.horizontal_res = 1920
        self.vertical_res = 1440
        self.horizontal_fov = 62.2 * (math.pi / 180)  # convert to radians 
        self.vertical_fov = 48.8 * (math.pi / 180)  # convert to radians
        self.dist_coeff = [0.0, 0.0, 0.0, 0.0, 0.0]  # from the rostopic camera info
        self.camera_matrix = [[530.8269276712998, 0.0, 320.5],[0.0, 530.8269276712998, 240.5],[0.0, 0.0, 1.0]]
        self.np_camera_matrix = np.array(self.camera_matrix)
        self.np_dist_coeff = np.array(self.dist_coeff)
        self.bridge = CvBridge()
        
        # set PL parameters 
        self.vehicle.parameters['PLND_ENABLED']=1
        self.vehicle.parameters['PLND_TYPE']=1
        self.vehicle.parameters['PLND_TYPE']=3
        self.vehicle.parameters['PLND_EST_TYPE']=0
        self.vehicle.parameters['LAND_SPEED']= 20 # cm/s 

        # set the rangefinder parameters 
        self.vehicle.parameters["RNGFND1_TYPE"] = 1
        self.vehicle.parameters["RNGFND1_MIN_CM"] = 0 
        self.vehicle.parameters["RNGFND1_MAX_CM"] = 1500 
        self.vehicle.parameters["RNGFND1_PIN"] = 0  
        self.vehicle.parameters["RNGFND1_SCALING"] = 10
        
        self.IDs_Dict = dicgen.ids_dict()
        self.k2 = 0
        
        self.cmd_prep = False
        self.cmd_prep_sub = self.create_subscription(Bool,
                                                        '/cmd_prep',
                                                        self.prep_callback,
                                                        10)
        
        # takeoff commands sub
        self.cmd_takeoff = False
        self.takeoff_stage = 0
        self.cmd_takeoff_sub = self.create_subscription(Bool,
                                                        '/cmd_takeoff',
                                                        self.takeoff_callback,
                                                        10)
        self.cmd_land = False
        self.wamv_landing = False
        self.marker_landing = 0 #0 - no marker   1 - Aruco   2 - Landing Pad
        self.RTL_stage = 0
        self.no_lat_cnt = 0
        self.RTL_dist = -1
        self.land_stage = 0
        self.cmd_land_sub = self.create_subscription(Bool,
                                                        '/cmd_land',
                                                        self.land_callback,
                                                        10)
        self.land_loc = LocationGlobalRelative
        self.land_loc_sub = self.create_subscription(NavSatFix,
                                                '/land_loc',
                                                self.land_loc_callback,
                                                1)
        
        # following vel commands sub
        self.cmd_task = False
        #self.target_move = [[5,-13,self.flight_height],[-15,6,self.flight_height]]
        self.target_move = 5,5,self.flight_height
        self.task_stage = [0]*len(self.target_move)
        self.target = 0
        self.task_dist= [-1]*len(self.target_move)
        self.task_loc = [LocationGlobalRelative]*len(self.target_move)
        self.cmd_task_sub = self.create_subscription(Bool,
                                                        '/cmd_task',
                                                        self.task_callback,
                                                        10)
        
        self.goto_stage = 0
        self.goto_dist = -1
        self.goto_loc = LocationGlobalRelative
        
        # replenishment variables
        self.replenish_dist = -1
        self.replenish_loc = LocationGlobalRelative
        self.lost_pad = 0
        self.lastloc = []
        self.pointslist = []
        self.point = 0
        
        self.cmd_vel = Twist()#TwistWithCovarianceStamped()
        self.cmd_vel_sub = self.create_subscription(TwistWithCovarianceStamped, 
                                                    '/cmd_vel',
                                                    self.vel_callback,
                                                    10)
        
        self.cmd_destroy = False
        self.cmd_destroy_sub = self.create_subscription(Bool, 
                                                    '/cmd_destroy',
                                                    self.destroy_callback,
                                                    10)
        
        
        # image publisher info
        self.newimg_pub = self.create_publisher(Image, '/camera/color/image_new', 10)
        self.camera_sub = self.create_subscription(Image,
                                                   '/drone_landing_camera/image_raw',
                                                   self.camera_callback,
                                                   2)
        #False
        #False
        self.destroy_flag = False  #---
        self.landed_flag = False   #128
        self.land_flag = False     #64
        self.task_complete = False #32
        self.task_flag = False     #16
        self.tookoff_flag = False  #8
        self.takeoff_flag = False  #4
        self.armable_flag = False  #2
        self.arming_flag = False   #1
        self.publish_int = 0
        self.heartbeat_pub = self.create_publisher(Int16, '/drone/heartbeat', 10)
        
        self.cmd_takeoff_sub
        self.cmd_prep_sub
        self.cmd_land_sub
        self.land_loc_sub
        
        self.refresh_rate = 5
        self.rate = self.create_timer(1/self.refresh_rate,self.heartbeat_callback)
        self.i = 0
        
    def heartbeat_pub_funct(self,pub_array):
        self.publish_int = np.packbits(pub_array)
        newmsg = Int16()
        newmsg.data = self.publish_int.item()
        self.heartbeat_pub.publish(newmsg)
        
    def heartbeat_callback(self):
        sub_array = [False]*3+[self.cmd_destroy,self.cmd_land,self.cmd_task,self.cmd_takeoff,self.cmd_prep]
        self.sub_int = np.packbits(sub_array) 
        #if not self.arming_flag and self.sub_int <= 1:
        #print(self.sub_int)
        if self.sub_int == 1 or self.sub_int == 3:
            self.arming_flag, self.armable_flag = self.armable_commander()
        elif self.sub_int == 2:
            self.takeoff_flag = True
            self.tookoff_flag = self.takeoff_commander()
        elif self.sub_int == 4 or self.sub_int == 12:
            self.task_flag = True
            self.task_complete = self.task_commander()#self.grid_commander()
        elif self.sub_int == 8:
            self.land_flag = True
            self.landed_flag = self.land_commander()
        elif self.sub_int == 16 or self.sub_int == 24:
            self.land_flag = True
            self.landed_flag = self.land_commander()
            if self.landed_flag:
                self.destroy_flag = self.destroy_commander()
            else:
                pass
        elif self.sub_int == 0:
            pass
        else:
            print(f'Received Sub Int of {self.sub_int}')
            self.hold_pos_commander()
        if self.cmd_destroy:
            self.destroy_flag = self.destroy_commander()
        outarry = [self.landed_flag,self.land_flag,self.task_complete,self.task_flag,\
                                self.tookoff_flag,self.takeoff_flag,self.armable_flag,self.arming_flag]
        if sum(outarry)>1:
            print(outarry)
            outloc = np.argwhere(outarry)[0].item()
            
            outarry = [False]*8
            outarry[outloc] = True
            self.landed_flag,self.land_flag,self.task_complete,self.task_flag,\
                                self.tookoff_flag,self.takeoff_flag,self.armable_flag,self.arming_flag = outarry
        self.heartbeat_pub_funct(outarry)
        
    
    def prep_callback(self,msg):
        self.cmd_prep = msg.data
    
    def takeoff_callback(self, msg):
        #print('running takeoff')
        self.cmd_takeoff = msg.data
        
    def task_callback(self,msg):
        self.cmd_task = msg.data
        
    def vel_callback(self, msg):
        #print('running following')
        self.cmd_vel = msg.twist.twist
    
    def land_callback(self, msg):
        #print('running landing')
        self.cmd_land = msg.data    
        
    def land_loc_callback(self, msg):
        self.land_loc.lat = msg.latitude
        self.land_loc.lon = msg.longitude
    
    def destroy_callback(self, msg):
        self.cmd_destroy = msg.data
    
    def camera_callback(self, msg):
        self.new_image = self.bridge.imgmsg_to_cv2(msg, 'rgb8')
    
    def hold_pos_commander(self):
        a=2
    
    def armable_commander(self):
        if not self.arming_flag:
            self.arming_flag = True
        else:
            if self.vehicle.is_armable:
                self.arming_flag = False
                self.armable_flag = True
        return self.arming_flag, self.armable_flag
    
    def takeoff_commander(self):
        if not self.tookoff_flag:
            if self.takeoff_stage == 0:
                print('starting takeoff')
                self.armable_flag = False
                self.home = self.vehicle.location.global_relative_frame
            if self.takeoff_stage == 4:
                print('takeoff complete')
                self.takeoff_flag = False
                self.tookoff_flag = True
                self.cmd_takeoff_sub.destroy()
                self.cmd_takeoff = False
                self.cmd_vel_sub
                self.cmd_task_sub
                #self.cmd_land_sub
                
            elif self.takeoff_stage == -1:
                print('takeoff failure')
            else:
                self.takeoff_stage = dk.takeoff_action(self.vehicle,self.takeoff_height, \
                                                       self.spawn_height,self.takeoff_stage)
                #print('Still running takeoff')
        else:
            print('Task may not have started')
            self.task_flag = True
        return self.tookoff_flag
        
    def follow_commander(self):
        if not self.task_flag:
            print('Running follow')
            self.task_flag = True
        if self.cmd_land:
            self.cmd_task = False
            self.task_flag = False
            self.land_commander()
            print('Running land through follow')
        dk.send_twist_cmd(self.vehicle, self.cmd_vel)
        return self.task_flag
    
    def goto_commander(self,point_move, goto_stage, point_dist, point_loc):
        currentloc = self.vehicle.location.global_relative_frame
        goto_stage, point_dist, point_loc = \
            dk.goto_local_action(self.vehicle,point_move,\
                currentloc,goto_stage,point_dist,point_loc) 
        return goto_stage, point_dist, point_loc
        
    def task_commander(self):
        if self.goto_stage == 0:
            print('Starting goto')
        self.goto_stage, self.goto_dist, self.goto_loc = \
            self.goto_commander(self.target_move, self.goto_stage, self.goto_dist, self.goto_loc)
        if self.goto_stage == 2:
            task_complete = True
            print('Target reached')
        else:
            task_complete = False
        return task_complete
        
    
    def task_commander_replenish(self):
        if self.task_stage[self.target] == 0:
            print('Starting task')
            self.replenish_stage = -1
            self.replenish_move_stage = 0
            self.replenish_land_stage = 0
            self.replenish_move = self.target_move[self.target]
            
        
        #self.replenish_stage, self.replenish_move_stage, self.replenish_land_stage, self.lastloc = \
        #self.replenishment_commander(self.replenish_stage, self.replenish_move_stage, \
        #                             self.replenish_land_stage, self.replenish_move, self.lastloc)
        
        #goto_commander
        #print(self.replenish_stage)
        if self.replenish_stage == -1:
            self.task_stage[self.target] = 1
        elif self.replenish_stage == 1:
            self.task_stage[self.target] = 2
            #print('Arrived at location')
        elif self.replenish_stage == 3:
            self.task_stage[self.target] = 3
        
        if self.task_stage[self.target] == 3:
            if not self.target == len(self.target_move)-1:
                print('Resetting task')
                self.lastloc = []
                #self.target = np.argwhere(np.array(self.task_stage)==0)[0].item()
        
        
        if all([x==4 for x in self.task_stage]):
            self.task_complete = True
            
        if self.cmd_land:
            self.cmd_task = False
            self.task_flag = False
            self.land_commander()
            print('Running land through follow')
        return self.task_complete
    
    def land_commander(self):
        if self.land_stage != 10:
            if self.RTL_stage < 2:
                if self.RTL_stage == 0:
                    print('retuning to home')
                    self.cmd_vel_sub.destroy()
                self.RTL_stage, self.RTL_dist = self.RTL_function(self.RTL_stage, self.RTL_dist)
                
            elif self.RTL_stage >= 2:
                self.land_stage, self.k2 = dk.land_marker(self.vehicle,self.land_stage,\
                        self.RF_height,self.IDs_Dict,self.k2,self.spawn_height,\
                        self.bridge,self.newimg_pub,self.new_image,self.cmd_vel)
                if self.land_stage == 10:
                    print('landing complete')
                    self.landed_flag = True
                    self.cmd_land = False

        else:
            self.landed_flag = True
        return self.landed_flag
        
    
    
    def land_commander_old(self):
        #print('running landing')
        if self.land_stage != 10:
            if self.RTL_stage < 2:
                if self.RTL_stage == 0:
                    print('retuning to home')
                    self.cmd_vel_sub.destroy()
                self.RTL_stage, self.RTL_dist = self.RTL_function(self.RTL_stage, self.RTL_dist)
                
            elif self.RTL_stage >= 2:
                self.land_stage = self.land_function(self.land_stage, self.wamv_landing, self.marker_landing)
                if self.land_stage == 10:
                    print('landing complete')
                    self.landed_flag = True
                    self.cmd_land = False
                        
        else:
            self.landed_flag = True
        return self.landed_flag
            
    
    def destroy_commander(self):
        print('Destroying')
        self.landed_flag = False
        self.destroy_flag = True
        
        outarry = [self.landed_flag,self.land_flag,self.task_complete,self.task_flag,\
                                self.tookoff_flag,self.takeoff_flag,self.armable_flag,self.arming_flag]
        
        for i in range(0,3):
            self.heartbeat_pub_funct(outarry)
        print('Mission Complete')
        sys.exit(0)
        self.destroy_node()
        self.executor.shutdown()
        #rclpy.signal_shutdown()
        #
        return self.destroy_flag
    
    def replenishment_commander(self, replenish_stage, replenish_move_stage, replenish_land_stage, replenish_target_loc, \
                                lastloc):
        if False:#replenish_stage == 0:
            print('Starting replenish')
        currentloc = self.vehicle.location.global_relative_frame
        if not hasattr(currentloc, 'lat'):
            self.no_lat_cnt += 1
            print(f'No lat/lon itter {self.no_lat_cnt}')
        else:
            self.no_lat_cnt = 0
            dx, dy = self.replenishment_scan(replenish_stage, currentloc)
            landloc = [dx, dy, 1]
            if dx == -1 or dy == -1:
                if not lastloc:
                    replenish_stage = -1
                else:
                    if self.lost_pad > 30:
                        replenish_stage = -1
                    else:
                        dx, dy = lastloc
                        landloc = [dx, dy, 0]
                        self.lost_pad += 1
            
            elif dx > 0.01 or dy > 0.01:
                    replenish_stage = 0
                    self.replenish_move_stage = 0
                    self.replenish_target_loc = LocationGlobalRelative
                    self.replenish_dist = -1
                    self.lost_pad = 0
            else:
                replenish_stage = 1
                self.lost_pad = 0
                
            if replenish_stage == -1:
                #print('Scanning')
                replenish_move_stage = self.replenishment_move(replenish_stage, \
                                        replenish_move_stage, replenish_target_loc, currentloc)
                
            elif replenish_stage == 0:
                replenish_target_loc = [dx, dy, self.flight_height]
                replenish_move_stage = self.replenishment_move(replenish_stage, \
                                        replenish_move_stage, replenish_target_loc, currentloc)
                if replenish_move_stage == 2:
                    replenish_stage = 1
                else:
                    replenish_stage = 0
            
            elif replenish_stage == 1 or replenish_stage == 2:
                
                replenish_land_stage = dk.land_pad(self.vehicle, self.RF_height,\
                                replenish_land_stage, self.bridge, self.newimg_pub,\
                                self.new_image,landloc)
                if replenish_land_stage == 10:
                    replenish_stage = 3
                else:
                    replenish_stage = 2
        
        return replenish_stage, replenish_move_stage, replenish_land_stage, lastloc
    
    def replenishment_scan(self, replenish_stage, currentloc):
        x_ang, y_ang = dk.landing_pad_finder(self.vehicle, self.new_image, \
                    currentloc.alt, self.bridge, self.newimg_pub)
        if x_ang == -1 and y_ang == -1:
            dx = -1
            dy = -1
        else:
            dx, dy = dk.ang_to_dists(x_ang, y_ang, currentloc.alt)
        return dx, dy

    
    def replenishment_move(self, replenish_stage, replenish_move_stage, target_move, currentloc):
        replenish_move_stage,self.replenish_dist,self.replenish_loc = \
                    dk.goto_local_action(self.vehicle,target_move,\
                        currentloc,replenish_move_stage,self.replenish_dist,self.replenish_loc)
        return replenish_move_stage
    
    def RTL_function(self, RTL_stage, RTL_dist):
        #print('Returning to {}, {}'.format(self.land_loc.lat,self.land_loc.lon))
        currentloc = self.vehicle.location.global_relative_frame
        if not hasattr(currentloc, 'lat'):
            self.no_lat_cnt += 1
            print(f'No lat/lon itter {self.no_lat_cnt}')
        else:
            self.no_lat_cnt = 0
            RTL_stage, RTL_dist = dk.goto_global_action(self.vehicle, self.land_loc,\
                                           self.land_height,currentloc,
                                           RTL_stage,RTL_dist)
        if RTL_stage == 2:
            print('back to home')
            RTL_dist = -1
        elif RTL_stage == -1:
            print('RTL failure')
        return RTL_stage, RTL_dist


    def land_function(self, land_stage, wamv_landing, marker_landing, *landing_Dict):
        if land_stage == 0:
            print('starting landing')
            self.i = 30
        if not landing_Dict:
           landing_Dict = 0
           land_stage = dk.landing_controller(self.vehicle,self.spawn_height,\
                                        self.RF_height,wamv_landing,marker_landing,\
                                         self.cmd_vel,land_stage,self.bridge,self.new_image,self.newimg_pub)
           return_arry = land_stage, landing_Dict
        else:
            land_stage, landing_Dict = dk.landing_controller(self.vehicle,self.spawn_height,\
                                    self.RF_height,wamv_landing,marker_landing,\
                                     self.cmd_vel,land_stage,self.bridge,self.new_image,self.newimg_pub,landing_Dict)
            return_arry = land_stage
        if land_stage == 5:
            if self.i == 30:
                print("Waiting to settle")
                self.i = 0
            else:
                self.i += 1
        elif land_stage == -1:
            print('landing failure')
        
        return return_arry



def main(args=None):
    
    rclpy.init(args=args)
    
    drone_node = drone_control()
    
    rclpy.spin(drone_node)
    
    #drone_node.destroy_node()
    rclpy.shutdown()
    print('done')
    sys.exit(0)
if __name__ == '__main__':
    main()

