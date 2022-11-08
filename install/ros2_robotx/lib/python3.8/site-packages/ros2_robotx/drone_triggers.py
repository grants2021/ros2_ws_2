#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Nov  3 20:37:41 2022

@author: grant
"""
import time

import rclpy
from rclpy.node import Node

from std_msgs.msg import Bool
from std_msgs.msg import Int16

from arming_and_takeoff import takeoff_action


class drone_triggers(Node):
    
    def __init__(self, vechicleIn):
        super().__init__('arm_and_takeoff')
        
        self.takeoff_height = 5.0
        self.receieved_takeoff = False
        self.receieved_landing = False
        self.vehicle = vechicleIn
        
        self.completed_takeoff = False
        self.completed_landing = False
        
        
        self.takeoff_subscriber = self.create_subscription(
            Bool,
            '/takeoff_cmd',
            self.takeoff_cmd_callback,
            1)
        
        self.land_subscriber = self.create_subscription(
            Bool,
            '/land_cmd',
            self.land_cmd_callback,
            1)
        
        self.UAV_heartbeat = self.create_publisher(
            Int16,
            '/UAV_heartbeat',
            10)
        
    
    def takeoff_cmd_callback(self, msg):
        self.receieved_takeoff = msg.data
        newmsg = Bool()
        if self.receieved_takeoff:
            self.completed_takeoff = takeoff_action(self.vehicle,self.takeoff_height)
            newmsg.data = 1
        else:
            newmsg.data = 0
        self.UAV_heartbeat.publish(newmsg)
            
    
        
    def land_cmd_callback(self, msg):
        self.receieved_landing = msg.data
        
def main(args=None):
    rclpy.init(args=args)
    
    node = drone_triggers()
    
    rclpy.spin(node)
    
    node.destroy_node()
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()
            