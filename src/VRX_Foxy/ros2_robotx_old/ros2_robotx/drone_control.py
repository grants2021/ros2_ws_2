#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Nov  4 11:19:35 2022

@author: grant
"""
import sys
sys.path.append(r'/home/grant/vrx_ws/src/adept-vrx/robotX_2022/nodes')
sys.path.append(r'/opt/ros/foxy/lib/python3.8/site-packages')

import math
import time

import pandas as pd
import numpy as np


import rclpy
from rclpy.node import Node

from geometry_msgs.msg import Twist
from sensor_msgs.msg import Image
from std_msgs.msg import Bool, Int16

from dronekit import connect, VehicleMode, LocationGlobalRelative, LocationGlobal, APIException

import dk_functs_dict as dk
    
class drone_control(Node):
    def __init__(self):
        super().__init__('drone_control')
        
        self.connection_string = "udp:127.0.0.1:14550"
        self.vehicle = connect(self.connection_string, wait_ready=True)
        self.spawn_height = dk.get_true_abs_height(self.vehicle, 0)
        self.takeoff_height = 5 #m 
        self.flight_height = self.takeoff_height
        self.home = self.vehicle.location.global_relative_frame
        
        self.rate = self.node.create_rate(15)
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
        
        # takeoff commands sub
        self.cmd_takeoff = False
        self.cmd_takeoff_sub = self.create_subscription(Bool,
                                                        '/cmd_takeoff',
                                                        self.takeoff_callback,
                                                        1)
        self.cmd_land = False
        self.cmd_land_sub = self.create_subscription(Bool,
                                                        '/cmd_land',
                                                        self.land_callback,
                                                        1)
        # following vel commands sub
        self.cmd_vel = Twist()
        self.cmd_vel_sub = self.create_subscription(Twist, 
                                                    '/cmd_vel',
                                                    self.following_callback,
                                                    10)
        
        # image publisher info
        self.newimg_pub = self.create_publisher(Image, '/camera/color/image_new', 10)
        # takeoff publisher
        self.takeoff_flag = False
        self.takeoff_flag_pub = self.create_publisher(Bool, '/drone/takeoff_flag', 1)
        # land publisher
        self.land_flag = False
        self.land_flag_pub = self.create_publisher(Bool, '/drone/land_flag', 1)
        
    def takeoff_callback(self, msg):
        self.cmd_takeoff = msg.data
        newmsg = Bool()
        if self.cmd_takeoff and not self.takeoff_flag:
            dk.takeoff_action(self.vehicle, self.takeoff_height, self.spawn_height)
            self.takeoff_flag = True
            newmsg.data = True
        elif self.cmd_takeoff and self.takeoff_flag:
            newmsg.data = True
        else:
            newmsg.data = False
        self.takeoff_flag_pub.publish(newmsg)
        
    def following_callback(self, msg):
        self.cmd_vel = msg.data
        dk.send_twist_cmd(self.cmd_vel)
    
    def land_callback(self, msg):
        self.cmd_land = msg.data
        newmsg = Bool()
        dist_to_home = dk.latlong_to_dists(self.vehicle, self.home)
        if dist_to_home[-1] >= 0.1:
            dk.RTL_action(self.vehicle, self.home)
            newmsg.data = False
        else:
            dk.land_action(self.vehicle)
            newmsg.data = True
        self.land_flag_pub.publish(newmsg)
    
    
def main(args=None):
    rclpy.init(args=args)
    
    node = drone_control()
    
    rclpy.spin(node)
    
    node.destroy_node()
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()