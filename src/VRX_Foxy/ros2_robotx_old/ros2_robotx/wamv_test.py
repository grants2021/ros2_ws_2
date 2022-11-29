#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Nov  3 20:56:22 2022

@author: grant
"""
import time

import rclpy
from rclpy.node import Node

from std_msgs.msg import Bool

class wamv_test(Node):
    
    def __init__(self):
        super().__init__('wamv_test')
        
        self.start_time = time.time()
        self.takeoff_time = time.time()
        
        self.send_takeoff = False
        self.UAV_heartbeat = 0
        # -1 error, 0 not taken off, 1 taking off, 2 completing mission, 3 landing, 4 landed
        
        takeoff_cmd_pub = self.create_publisher(Bool,
                              '/takeoff_cmd',
                              10)
        
        UAV_heartbeat_sub = self.create_subscription(Bool,
                                 '/UAV_heartbeat',
                                 self.heartbeat_callback,
                                 10)
        
        timer_period = 0.5
        #self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i=0
        
        
    def heartbeat_callback(self, msg):
        self.UAV_heartbeat = msg.data
        if self.UAV_heartbeat == 0:
            if time.time() - self.start_time >= 10:
                print('Sending takeoff')
            else:
                print('Waiting 5 seconds to start')
        elif self.UAV_heartbeat == 1:
            print('Waiting for drone to complete takeoff')
        elif self.UAV_heartbeat == 2:
            print('Drone has taken off')

def main(args=None):
    rclpy.init(args=args)
    
    node = wamv_test()
    
    rclpy.spin(node)
    
    node.destroy_node()
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()