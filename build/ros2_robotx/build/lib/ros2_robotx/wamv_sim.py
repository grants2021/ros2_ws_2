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
from sensor_msgs.msg import NavSatFix

    
class wamv_sim(Node):
    def __init__(self):
        super().__init__('drone_control')
        
        self.takeoff_start = ()
        self.time_to_wait = 0
        self.run_task = True
        
        
        self.armed_antispam = False
        self.cmd_prep = False
        self.cmd_prep_pub = self.create_publisher(Bool,
                                                     '/cmd_prep',
                                                     1)
        
        # waiting for arm pub
        self.cmd_armable_pub = self.create_publisher(Bool,
                                                     '/cmd_takeoff',
                                                     1)
        
        # takeoff commands sub
        self.takeoff_antispam = False
        self.cmd_takeoff = False
        self.cmd_takeoff_pub = self.create_publisher(Bool,
                                                '/cmd_takeoff',
                                                1)
        self.task_antispam = False
        self.cmd_task = False
        self.cmd_task_pub = self.create_publisher(Bool,
                                                '/cmd_task',
                                                1)
        
        self.cmd_land = False
        self.land_antispam = False
        self.cmd_land_pub = self.create_publisher(Bool,
                                                '/cmd_land',
                                                1)
        
        self.loc_msg = NavSatFix()
        self.loc_msg.latitude = -35.36317156847902 
        self.loc_msg.longitude = 149.16534429782516
        
        self.land_loc_pub = self.create_publisher(NavSatFix,
                                                '/land_loc',
                                                1)
        
        self.cmd_destroy = False
        self.cmd_destroy_pub = self.create_publisher(Bool,
                                                '/cmd_destroy',
                                                1)
        
        self.destroy_flag = False
        self.landed_flag = False
        self.land_flag = False     #16
        self.task_complete = False
        self.task_flag = False   #8
        self.tookoff_flag = False
        self.takeoff_flag = False  #4
        self.armable_flag = False  #2
        self.arming_flag = False   #1
        self.prep_flag = False
        self.heartbeat_sub = self.create_subscription(Int16, 
                                                         '/drone/heartbeat', 
                                                         self.heartbeat_callback,
                                                         10)
        self.heartbeat_sub
        self.i = 0
        
    
    def heartbeat_callback(self,msg):
        msgInt = msg.data
        msgArray = np.unpackbits(np.uint8(msgInt))>0
        newmsg = Bool()
        newmsg.data = True
        if False:#sum(msgArray) != 0:
            print(msgArray)
        if msgInt == 0:
            if not self.prep_flag:
                self.prep_flag = True
                self.cmd_prep_pub.publish(newmsg)
            elif not self.arming_flag:
                self.cmd_prep_pub.publish(newmsg)
                print('commanding prep')
            else:
                #print('passing')
                pass
            
        elif msgArray[-1]:
            if not self.arming_flag:
                self.arming_flag = True
            if not self.armed_antispam:
                print('Waiting for armable')
                self.armed_antispam = True
            
        elif msgArray[-2]:
            if not self.armable_flag:
                self.armable_flag = True
                newmsg.data = False
                self.cmd_prep_pub.publish(newmsg)
            print('Armable, sending takeoff')
            self.takeoff_callback()
            
        elif msgArray[-3]:
            if not self.takeoff_flag:
                self.takeoff_flag = True
            if not self.takeoff_antispam:
                print('Drone is taking off')
                self.takeoff_antispam = True
            
        elif msgArray[-4]:
            self.tookoff_flag = True
            self.task_callback()
            print('Drone has completed takeoff')
            
        elif msgArray[-5]:
            if not self.task_antispam:
                print('Drone is running task')
                self.task_antispam = True
                
            if not self.task_flag:
                self.task_flag = True
                print('Drone is running task')
                
            if self.cmd_land:
                print('Drone is landing')
                
            self.task_callback()
        
            if msgArray[-6]:
                self.task_complete = True
                print('Task complete1')
                
        elif msgArray[-6]:
                self.task_complete = True
                print('Task complete2')
                self.task_callback()
        
        elif msgArray[-7]:
            self.land_flag = True
            if not self.land_antispam:
                print('Drone is landing')
                self.land_antispam = True
        
        elif msgArray[-8]:
            print('Drone has landed, sending shutdown')
            self.landed_flag = True
            self.destroy_flag = True
            self.cmd_destroy_pub.publish(newmsg)
            sys.exit(0)
            
            
        elif sum(msgArray) > 1:
            print('two flags triggered')
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
        
        
    def task_callback(self):  
        
        tskmsg = Bool()
        
        if not self.task_complete:
            if self.cmd_land:
                tskmsg.data = False
                self.cmd_task = False
                self.land_callback()
            else:
                tskmsg.data = True
        else:
            self.cmd_land = True
            self.cmd_task = False
            tskmsg.data = False
            lndmsg = Bool()
            lndmsg.data = True
            self.land_loc_pub.publish(self.loc_msg)
            self.cmd_land_pub.publish(lndmsg)
        self.cmd_task_pub.publish(tskmsg)
        
    def land_callback(self):
        #print('running landing')
        cmd_msg = Bool()
        if self.land_flag:
            self.cmd_land = False
            cmd_msg.data = False
        else:
            cmd_msg.data = True
            
        #print('Takeoff {}   Follow {}   Land {}'.format(self.takeoff_flag,self.follow_flag,self.land_flag))
        self.land_loc_pub.publish(self.loc_msg)
        self.cmd_land_pub.publish(cmd_msg)
        
    
    
def main(args=None):
    rclpy.init(args=args)
    
    wamv_node = wamv_sim()
    
    #arm_received = False
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