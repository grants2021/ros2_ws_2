#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Nov  4 11:39:19 2022

@author: grant
"""

import math
import time

import numpy as np

from dronekit import connect, VehicleMode, LocationGlobalRelative, LocationGlobal, APIException
from pymavlink import mavutil   

#%% #################   CALCULATIONS   #################
def get_true_abs_height(vehicle, spawn_height):
    return vehicle.location.global_relative_frame.alt+spawn_height

def latlong_to_dists(vehicle, targetLocation, *argv):
    if argv:
        currentLocation = argv
    else:
        currentLocation = vehicle.location.global_relative_frame
    dLat = (targetLocation.lat - currentLocation.lat)*1.113195e5 
    dLon = (targetLocation.lon - currentLocation.lon)*1.113195e5 
    dTot = math.sqrt((dLon*dLon)+(dLat*dLat))
    return(dLat,dLon,dTot)

def twist_to_vel(data):
    outarray = np.array([0.0]*6)
    outarray[0] = data.linear.x
    outarray[1] = data.linear.y
    outarray[2] = data.linear.z
    outarray[3] = data.angular.x
    outarray[4] = data.angular.y
    outarray[5] = data.angular.z
    return outarray


def send_twist_cmd(vehicle, msg):
    velarray = twist_to_vel(msg)
    cmd_vx = velarray[0]
    cmd_vy = -velarray[1]
    cmd_yaw = velarray[5]
    print('VX {}   VY {}   YAW {}'.format(cmd_vx,cmd_vy,cmd_yaw))
    msg = vehicle.message_factory.set_position_target_global_int_encode(
        0,
        0,0,
        mavutil.mavlink.MAV_FRAME_GLOBAL_RELATIVE_ALT_INT, 
        #0b0000111100011111,  # .. BITMASK -> consider only the vz ax xy 
        #0b0000111111000111,  # .. BITMASK -> consider only the vx vy vz
        0b0000110111000111,  # .. BITMASK -> consider only the dx dy vz
        0, 0, 0,  # position
        cmd_vx, cmd_vy, 0,  # velocity 
        0, 0, 0,  # acceleration
        cmd_yaw, 0)
    #print(msg.__str__())
    vehicle.send_mavlink(msg)
    
#%% #################   ARMING AND TAKEOFF   #################
def takeoff_action(vehicle, takeoff_height, spawn_height):
    while vehicle.is_armable != True:
        print('Waiting for vehicle to become armable')
        time.sleep(1)
    print('vehicle is now armable')
    
    vehicle.mode = VehicleMode('GUIDED')
    while vehicle.mode != "GUIDED":
        print('Waiting for drone to enter guided flight mode')
        time.sleep(1)
    print('Vehicle now in guided mode')

    vehicle.armed = True 
    while vehicle.armed == False:
        print('Waiting for vehicle to become armed')
        time.sleep(1)
    print("props are spinning")
    
    vehicle.simple_takeoff(takeoff_height)  # meters 
    while True:
        print("Current Altitude: %d"%get_true_abs_height())
        print('Goal Alt: %d'%takeoff_height)
        if get_true_abs_height()>=0.95*takeoff_height:
            print("target altitude reached")
            break 
        time.sleep(1)
        
def RTL_action(vehicle, home):
    vehicle.mode = "RTL"

    while vehicle.mode != "RTL":
        time.sleep(0.1)

    currentDistance = latlong_to_dists(home, vehicle.location.global_relative_frame)
    while currentDistance >= 0.1:
        time.sleep(0.1)
        currentDistance = latlong_to_dists(home, vehicle.location.global_relative_frame)

def land_action(vehicle):
    vehicle.mode = "LAND"
    while vehicle.mode != "LAND":
        time.sleep(0.1)
    return None 