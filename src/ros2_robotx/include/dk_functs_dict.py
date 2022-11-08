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
    #print('TL/CL')
    #print(dir(targetLocation))
    #print(dir(currentLocation))
    
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
    cmd_vy = cmd_vy - cmd_vx*math.sin(cmd_yaw)
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
    
def takeoff_action(vehicle, takeoff_height, spawn_height, takeoff_stagein):
    if takeoff_stagein == 0:
        vehicle.mode = VehicleMode('GUIDED')
        takeoff_stageout = 1
    elif takeoff_stagein == 1:
        if vehicle.mode != "GUIDED":
            takeoff_stageout = 1
        else:
            vehicle.armed = True 
            takeoff_stageout = 2
    elif takeoff_stagein == 2:
        if vehicle.armed == False:
            takeoff_stageout = 2
        else:
            vehicle.simple_takeoff(takeoff_height)
            takeoff_stageout = 3
    elif takeoff_stagein == 3:
        if get_true_abs_height(vehicle, spawn_height)<=0.95*takeoff_height:
            takeoff_stageout = 3
        else:
            takeoff_stageout = 4
    elif takeoff_stagein == 4:
        takeoff_stageout = 4
    else:
        takeoff_stageout = -1

    return takeoff_stageout
def RTL_action(vehicle, home, RTL_stagin):
    if RTL_stagin == 0:
        vehicle.mode = "RTL"
        RTL_stagout = 1
    elif RTL_stagin == 1:
        if vehicle.mode != "RTL":
            RTL_stagout = 1
        else:
            RTL_stagout = 2
    elif RTL_stagin == 2:
        currentDistance = latlong_to_dists(vehicle, home, vehicle.location.global_relative_frame)
        if currentDistance >= 0.1:
            RTL_stageout = 2
        else:
            RTL_stageout = 3
    elif RTL_stagin == 3:
        RTL_stageout = 3
    else:
        RTL_stageout = -1
    return RTL_stageout

def land_action(vehicle, spawn_height, land_stagein):
    if land_stagein == 0:
        vehicle.mode = "LAND"
        land_stageout = 1
    elif land_stagein == 1:
        if vehicle.mode != "LAND":
            land_stageout = 1
        else:
            land_stageout = 2
    elif land_stagein == 2:
        if vehicle.armed == True:
            land_stageout = 2
        else:
            land_stageout = 3
    elif land_stagein == 3:
        land_stageout = 3
    else:
        land_stageout = -1
    return land_stageout 