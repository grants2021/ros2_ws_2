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
print(np.__version__)

import math
import time


#np.random.bit_generator = np.random._bit_generator
#mport pandas as pd


import rclpy
from rclpy.node import Node

from geometry_msgs.msg import Twist, TwistWithCovarianceStamped
from sensor_msgs.msg import Image
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
        self.takeoff_height = 2 #m 
        self.flight_height = self.takeoff_height
        self.land_height = 2
        self.home = self.vehicle.location.global_relative_frame
        
        
        self.time_last = 0.0
        self.time_to_wait = 0.1
        
        # set canera parameters
        self.horizontal_res = 1920
        self.vertical_res = 1448
        self.horizontal_fov = 62.2 * (math.pi / 180)  # convert to radians 
        self.vertical_fov = 48.8 * (math.pi / 180)  # convert to radians
        self.dist_coeff = [0.0, 0.0, 0.0, 0.0, 0.0]  # from the rostopic camera info
        self.camera_matrix = [[530.8269276712998, 0.0, 320.5],[0.0, 530.8269276712998, 240.5],[0.0, 0.0, 1.0]]
        self.np_camera_matrix = np.array(self.camera_matrix)
        self.np_dist_coeff = np.array(self.dist_coeff)

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
        
        # takeoff commands sub
        self.cmd_takeoff = False
        self.takeoff_stage = 0
        self.cmd_takeoff_sub = self.create_subscription(Bool,
                                                        '/cmd_takeoff',
                                                        self.takeoff_callback,
                                                        10)
        self.cmd_land = False
        self.wamv_landing = False
        self.marker_landing = False
        self.RTL_stage = 0
        self.no_lat_cnt = 0
        self.RTL_dist = -1
        self.land_stage = 5
        self.cmd_land_sub = self.create_subscription(Bool,
                                                        '/cmd_land',
                                                        self.simple_land_callback,
                                                        10)
        # following vel commands sub
        self.cmd_follow = False
        self.cmd_vel = TwistWithCovarianceStamped()
        self.cmd_vel_sub = self.create_subscription(TwistWithCovarianceStamped, 
                                                    '/cmd_vel',
                                                    self.following_callback,
                                                    10)
        
        self.cmd_destroy = Bool()
        self.cmd_destroy_sub = self.create_subscription(Bool, 
                                                    '/cmd_destroy',
                                                    self.destroy_callback,
                                                    10)
        
        # image publisher info
        self.newimg_pub = self.create_publisher(Image, '/camera/color/image_new', 10)
        
        #False
        #False
        self.destroy_flag = False  #32
        self.land_flag = False     #16
        self.follow_flag = False   #8
        self.takeoff_flag = False  #4
        self.armable_flag = False  #2
        self.arming_flag = False   #1
        self.publish_int = 0
        self.heartbeat_pub = self.create_publisher(Int16, '/drone/heartbeat', 10)
        
        self.cmd_takeoff_sub
        
        
        self.refresh_rate = 15
        self.rate = self.create_timer(1/self.refresh_rate,self.heartbeat_callback)
        self.i = 0
        
    
    def heartbeat_callback(self):
        flag_array = [False]*2+[self.destroy_flag,self.land_flag,self.follow_flag,\
                                self.takeoff_flag,self.armable_flag,self.arming_flag]
        self.publish_int = np.packbits(flag_array)
        
        newmsg = Int16()
        newmsg.data = self.publish_int.item()
        self.heartbeat_pub.publish(newmsg)
        if self.publish_int <= 1:
            self.armable_callback()
        
    def armable_callback(self):
        if not self.arming_flag:
            self.arming_flag = True
            outval = False
        else:
            if self.vehicle.is_armable:
                self.armable_flag = True
                outval = True
            else:
                outval = False
        return outval
        
    
    def takeoff_callback(self, msg):
        #print('running takeoff')
        self.cmd_takeoff = msg.data
        if self.cmd_takeoff and not self.takeoff_flag:
            if self.takeoff_stage == 0:
                print('starting takeoff')
                self.home = self.vehicle.location.global_relative_frame
            if self.takeoff_stage == 4:
                print('takeoff complete, running following')
                self.takeoff_flag = True
                self.cmd_follow = True
                self.follow_flag = True
                self.cmd_takeoff_sub.destroy()
                self.cmd_vel_sub
                self.cmd_land_sub
                
            elif self.takeoff_stage == -1:
                print('takeoff failure')
            else:
                self.takeoff_stage = dk.takeoff_action(self.vehicle,self.takeoff_height, \
                                                       self.spawn_height,self.takeoff_stage)
        elif self.cmd_takeoff and self.takeoff_flag:
            print('Follow may not have started')
            self.follow_flag = True
        
    def following_callback(self, msg):
        #print('running following')
        if self.cmd_follow:
            if not self.follow_flag:
                self.follow_flag = True
            if self.cmd_land:
                self.cmd_follow = False
            self.cmd_vel = msg.twist.twist
            dk.send_twist_cmd(self.vehicle, self.cmd_vel)
        
    
    def simple_land_callback(self, msg):
        #print('running landing')
        self.cmd_land = msg.data
        if self.cmd_land:
            if self.RTL_stage < 2:
                if self.RTL_stage == 0:
                    print('retuning to home')
                    self.cmd_vel_sub.destroy()
                currentloc = self.vehicle.location.global_relative_frame
                if not hasattr(currentloc, 'lat'):
                    self.no_lat_cnt += 1
                    print(f'No lat/lon itter {self.no_lat_cnt}')
                else:
                    self.no_lat_cnt = 0
                    self.RTL_stage,self.RTL_dist = dk.goto_action(self.vehicle, self.home,\
                                                   self.land_height,currentloc,
                                                   self.RTL_stage,self.RTL_dist)
                if self.RTL_stage == 2:
                    print('back to home')
                    self.RTL_dist = -1
                elif self.RTL_stage == -1:
                    print('RTL failure')
                    
            else:
                if self.land_stage == 0:
                    print('starting landing')
                self.land_stage, self.IDs_Dict = dk.landing_controller(self.vehicle,self.spawn_height,\
                                                     self.wamv_landing,self.marker_landing,\
                                                         msg,self.land_stage,self.IDs_Dict)
                #if self.land_stage == 3:
                #    print('Going to power off')
                #if self.land_stage == 4:
                #    print("Power is off")
                if self.land_stage == 10:
                    print('landing complete')
                    self.land_flag = True
                elif self.land_stage == -1:
                    print('landing failure')

                    #self.land_stage = dk.simple_land_action(self.vehicle, self.spawn_height,\
                    #                                 self.land_stage)
                    
            
    
    def destroy_callback(self, msg):
        self.cmd_destoy = msg.data
        if self.cmd_destoy:
            self.destroy_flag = True
            
            flag_array = [False]*2+[self.destroy_flag,self.land_flag,self.follow_flag,\
                                    self.takeoff_flag,self.armable_flag,self.arming_flag]
            self.publish_int = np.packbits(flag_array)
            
            newmsg = Int16()
            newmsg.data = self.publish_int.item()
            for i in range(0,3):
                self.heartbeat_pub.publish(newmsg)
            print('Mission Complete')
            sys.exit(0)
            self.destroy_node()
            self.executor.shutdown()
            #rclpy.signal_shutdown()
            #
            
def main(args=None):
    
    rclpy.init(args=args)
    
    drone_node = drone_control()
    #armout = False
    #while not armout:
    #    print('waiting for armable')
        #time.sleep(1/drone_node.refresh_rate)
    #    armout = drone_node.armable_callback()
    
    
    rclpy.spin(drone_node)
    
    #drone_node.destroy_node()
    rclpy.shutdown()
    print('done')
    sys.exit(0)
if __name__ == '__main__':
    main()