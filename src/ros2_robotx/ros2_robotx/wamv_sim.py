#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Nov  5 18:01:29 2022

@author: grant
"""

#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Nov  4 11:19:35 2022

@author: grant
"""
import sys
sys.path.append(r'/opt/ros/foxy/lib/python3.8/site-packages')
sys.path.append(r'/home/grant/miniconda3/lib/python3.8/site-packages')


import time

import numpy as np

import rclpy
from rclpy.node import Node

from geometry_msgs.msg import Twist
from std_msgs.msg import Bool, Int16

    
class wamv_sim(Node):
    def __init__(self):
        super().__init__('drone_control')
        
        self.takeoff_start = ()
        self.time_to_wait = 0
        self.follow_start = ()
        self.time_to_follow = 3
        
        # waiting for arm pub
        self.cmd_armable_pub = self.create_publisher(Bool,
                                                     '/cmd_takeoff',
                                                     1)
        
        # takeoff commands sub
        self.cmd_takeoff = False
        self.cmd_takeoff_pub = self.create_publisher(Bool,
                                                '/cmd_takeoff',
                                                1)
        
        self.cmd_follow = False
        
        self.cmd_land = False
        self.land_antispam = False
        self.cmd_land_pub = self.create_publisher(Bool,
                                                '/cmd_land',
                                                1)
        
        self.cmd_destroy = False
        self.cmd_destroy_pub = self.create_publisher(Bool,
                                                '/cmd_destroy',
                                                1)
        
        #False
        #False
        #False
        self.land_flag = False     #16
        self.follow_flag = False   #8
        self.takeoff_flag = False  #4
        self.armable_flag = False  #2
        self.arming_flag = False   #1
        self.heartbeat_sub = self.create_subscription(Int16, 
                                                         '/drone/heartbeat', 
                                                         self.heartbeat_callback,
                                                         10)
        self.heartbeat_sub
        self.i = 0
        
    
    def heartbeat_callback(self,msg):
        msgInt = msg.data
        if msgInt == 0:
            pass
        elif msgInt == 1:
            if not self.arming_flag:
                self.arming_flag = True
                print('Waiting for armable')
        elif msgInt == 3:
            if not self.armable_flag:
                self.armable_flag = True
                print('Armable, sending takeoff')
            self.takeoff_callback()
        elif msgInt == 7:
            if not self.takeoff_flag:
                self.takeoff_flag = True
                print('Drone has completed takeoff')
            self.follow_callback()
        elif msgInt == 15:
            if not self.follow_flag:
                self.follow_flag = True
                print('Drone is following')
            if self.cmd_land and not self.land_antispam:
                print('Drone is landing')
                self.land_antispam = True
            self.follow_callback()
        elif msgInt == 31:
            print('Drone has landed, sending shutdown')
            self.land_flag = True
            self.destroy_flag = True
            newmsg = Bool()
            newmsg.data = True
            self.cmd_destroy_pub.publish(newmsg)
        elif msgInt == 63:
            print('Mission complete')
            #self.destroy_node()
            #self.executor.shutdown()
            #rclpy.signal_shutdown()
            sys.exit(0)
        else:
            print('Unknown int {} returned'.format(msgInt))
        
    
    def armable_callback(self,msg):
        #print('running armable')
        temp_armable_flag = msg.data
        if temp_armable_flag:
            self.armable_flag = True
            newmsg = Bool()
            newmsg.data = False
            #self.takeoff_callback(newmsg)
        #self.rate.sleep()
        
    def takeoff_callback(self):
        newmsg = Bool()
        if self.takeoff_flag:
            newmsg.data = False
            self.cmd_takeoff = False
        else:
            if not self.cmd_takeoff:
                if not self.takeoff_start:
                    self.takeoff_start = time.time()
                    newmsg.data = False
                else:
                    if time.time()-self.takeoff_start < self.time_to_wait:
                        newmsg.data = False
                    else:
                        newmsg.data = True
                        self.cmd_takeoff = True
            else:
                newmsg.data = True
        self.cmd_takeoff_pub.publish(newmsg)
            
        
    def follow_callback(self):       
        if self.cmd_land:
            self.land_callback()
        else:
            if not self.cmd_follow and not self.follow_start:
                self.follow_start = time.time()
                self.cmd_follow = True
            elif self.cmd_follow and not self.follow_start:
                self.follow_start = time.time()
                print('Already commanded to follow but no follow start time found')
            else:
                if time.time() - self.follow_start > self.time_to_follow:
                    self.cmd_land = True
                    self.cmd_follow = False
                    newmsg = Bool()
                    newmsg.data = False
                    self.cmd_land_pub.publish(newmsg)
        
    def land_callback(self):
        #print('running landing')
        newmsg = Bool()
        if self.land_flag:
            self.cmd_land = False
            newmsg.data = False
        else:
            newmsg.data = True
        #print('Takeoff {}   Follow {}   Land {}'.format(self.takeoff_flag,self.follow_flag,self.land_flag))
        self.cmd_land_pub.publish(newmsg)
    
    
def main(args=None):
    rclpy.init(args=args)
    
    wamv_node = wamv_sim()
    
    arm_received = False
    #while not arm_received:
    #    arm_received = wamv_node.arm_received()
    #    time.sleep(1/wamv_node.refresh_rate)
    
    rclpy.spin(wamv_node)
    
    #wamv_node.destroy_node()
    rclpy.shutdown()
    print('done')
    sys.exit(0)
if __name__ == '__main__':
    main()