#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Nov  4 11:39:19 2022

@author: grant
"""

import math
import time

import numpy as np
import rclpy

import cv2
import cv2.aruco as aruco

from dronekit import connect, VehicleMode, LocationGlobalRelative, LocationGlobal, APIException
from pymavlink import mavutil   

#%% #################   CONSTANTS   #################

aruco_dict = aruco.getPredefinedDictionary(aruco.DICT_ARUCO_ORIGINAL)
parameters = aruco.DetectorParameters_create()
wamv_height = 1.3
drone_height = 0.194923
LAND_SPEED = 20
landThreshold = 0.38
landDesent = 0.4
camera_matrix = [[530.8269276712998, 0.0, 320.5],[0.0, 530.8269276712998, 240.5],[0.0, 0.0, 1.0]]
np_camera_matrix = np.array(camera_matrix)
dist_coeff = [0.0, 0.0, 0.0, 0.0, 0.0]
np_dist_coeff = np.array(dist_coeff)
horizontal_res = 1920
vertical_res = 1448
horizontal_fov = 62.2 * (math.pi / 180)  # convert to radians 
vertical_fov = 48.8 * (math.pi / 180) 

#%% #################   CALCULATIONS   #################
def get_true_abs_height(vehicle, spawn_height):
    return vehicle.location.global_relative_frame.alt+spawn_height
dist_coeff = [0.0, 0.0, 0.0, 0.0, 0.0]
def get_true_QR_relative_height(vehicle, spawn_height, wamv_landing):
    #Relative to bottom of drone!
    if wamv_landing:
        return vehicle.location.global_relative_frame.alt+(spawn_height-drone_height-wamv_height)
    else:
        return vehicle.location.global_relative_frame.alt

def latlong_to_dists(vehicle, targetLocation, currentLocation):   
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

def localvel_to_globalvel(vehicle, lvx, lvy):
    heading = vehicle.heading
    gvx = lvx*math.cos(math.radians(heading)) - lvy*math.sin(math.radians(heading))
    gvy = lvx*math.sin(math.radians(heading)) + lvy*math.cos(math.radians(heading))
    return(gvx,gvy)

def avg_to_ang(x,y):
    x_ang = (x - horizontal_res*0.5)*(horizontal_fov/horizontal_res)
    y_ang = (y - vertical_res*0.5)*(vertical_fov/vertical_res)
    return(x_ang,y_ang)
#%% #################   MESSAGES   #################
def global_pos_msg_factory(vehicle,dx,dy,dz):
    msg = vehicle.message_factory.set_position_target_global_int_encode(
        0,
        0,0,
        mavutil.mavlink.MAV_FRAME_GLOBAL_RELATIVE_ALT_INT, 
        0b0000111111111000,  # .. BITMASK -> consider only the dx dy dz
        dx,dy,dz,  # position
        0, 0, 0,  # velocity 
        0, 0, 0,  # acceleration
        0, 0)
    vehicle.send_mavlink(msg)

def global_vel_msg_factory(vehicle,vx,vy,vz):
    msg = vehicle.message_factory.set_position_target_global_int_encode(
        0,
        0,0,
        mavutil.mavlink.MAV_FRAME_GLOBAL_RELATIVE_ALT_INT, 
        0b0000111111000111,  # .. BITMASK -> consider only the vx vy vz
        0, 0, 0,  # position
        vx, vy, vz,  # velocity 
        0, 0, 0,  # acceleration
        0, 0)
    vehicle.send_mavlink(msg)

def local_pos_msg_factory(vehicle,dx,dy,dz):
    msg = vehicle.message_factory.set_position_target_local_ned_encode(
        0,
        0,0,
        mavutil.mavlink.MAV_FRAME_LOCAL_NED, 
        0b0000111111111000,  # .. BITMASK -> consider only the dx dy dz
        dx,dy,dz,  # position
        0, 0, 0,  # velocity 
        0, 0, 0,  # acceleration
        0, 0)
    vehicle.send_mavlink(msg)

def local_vel_msg_factory(vehicle,vx,vy,vz):
    msg = vehicle.message_factory.set_position_target_local_ned_encode(
        0,
        0,0,
        mavutil.mavlink.MAV_FRAME_LOCAL_NED, 
        0b0000111111000111,  # .. BITMASK -> consider only the vx vy vz
        0, 0, 0,  # position
        vx, vy, vz,  # velocity 
        0, 0, 0,  # acceleration
        0, 0)
    vehicle.send_mavlink(msg)

def attitude_msg_factory(vehicle,thrust):
    msg = vehicle.message_factory.set_attitude_target_encode(
        0,
        0, 0,
        0b00000100,
        [1.0,0.0,0.0,0.0],
        0,
        0,
        0,
        thrust)
    vehicle.send_mavlink(msg)

#%% #################   HORZ MOVEMENT   #################
def send_twist_cmd(vehicle, msg):
    velarray = twist_to_vel(msg)
    cmd_vx = velarray[0]
    cmd_vy = -velarray[1]
    cmd_vz = 0.0#velarray[2]
    cmd_yaw = velarray[5]
    cmd_vy = cmd_vy - math.sin(cmd_yaw)
    #print('VX {}   VY {}'.format(cmd_vx,cmd_vy))
    local_vel_msg_factory(vehicle,cmd_vx,cmd_vy,cmd_vz)


def goto_gps(vehicle, target_loc, target_height):
    lat = int(target_loc.lat*1e7)
    lon = int(target_loc.lon*1e7)
    #print('Going to lat {} lon {} alt {}'.format())
    global_pos_msg_factory(vehicle,lat,lon,target_height)


#%% #################   WAMV INTERACTIONS   #################

def wamv_vel_adder(vehicle,lvx,lvy,lvz,msg): #Used for when no drone velocity desired
    gvx,gvy = localvel_to_globalvel(vehicle, lvx, lvy)
    velarray = twist_to_vel(msg)
    wamv_vx = velarray[0]
    wamv_vy = -velarray[1]
    wamv_yaw = velarray[-1]
    wamv_vy = wamv_vy + math.sin(wamv_yaw)
    cmd_vx = gvx + wamv_vx
    cmd_vy = gvy + wamv_vy
    cmd_vz = lvz
    return cmd_vx,cmd_vy,cmd_vz
    
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

def goto_action(vehicle, target_loc, target_height, current_loc, goto_stagein, total_dist):
    if total_dist == -1:
        total_dist = latlong_to_dists(vehicle, target_loc, current_loc)[-1]
    if goto_stagein == 0:
        goto_gps(vehicle, target_loc, target_height)
        goto_stageout = 1
    elif goto_stagein == 1:
        currentDistance = latlong_to_dists(vehicle, target_loc, current_loc)[-1]
        if currentDistance >= total_dist*0.01 and currentDistance >= 0.05:
            goto_gps(vehicle, target_loc, target_height)
            goto_stageout = 1
        else:
            goto_stageout = 2
    elif goto_stagein == 2:
        goto_stageout = 2
    else:
        goto_stageout = -1
    return goto_stageout, total_dist

#%% #################   LANDING   #################

def simple_land_action(vehicle, spawn_height, land_stagein):
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
            land_stageout = 10
    elif land_stagein == 10:
        land_stageout = 10
    else:
        land_stageout = -1
    return land_stageout 


def landing_controller(vehicle,spawn_height,wamv_landing,marker_landing,msg,land_stagein,IDs_Dict):
    qralt = get_true_QR_relative_height(vehicle, spawn_height,wamv_landing)
    
    if qralt <= landThreshold and land_stagein <= 3:
        landing_cutoff(vehicle)
        land_stageout = 4
        land_stagein = 4
    if land_stagein == 4:
        cutoffresult = landing_finisher(vehicle)
        if cutoffresult:
            land_stageout = 10
            vehicle.armed = False
        else:
            land_stageout = 4
    else:
        if marker_landing:
            if not IDs_Dict:
                land_stageout = -1
                print('No IDs Dictonary')
            else:
                k2 = marker_landing(vehicle, IDs_Dict, qralt, wamv_landing)
                if k2 == 0:
                    if qralt>landDesent:
                        land_stageout = 2
                    else:
                        land_stageout = 3
                else:
                    land_stageout = 1
        else:
            free_landing(vehicle,qralt)
            if qralt>landDesent:
                land_stageout = 2
            else:
                land_stageout = 3
            
    return land_stageout, IDs_Dict


def landing_finisher(vehicle):
    if abs(vehicle.velocity[-1])<=abs(LAND_SPEED/500):
        print('Landed')
        return True
    else:
        print('Still moving')
        return False

def landing_cutoff(vehicle): 
    print('Cutting Power')
    attitude_msg_factory(vehicle,0)

def free_landing(vehicle,qralt):
    cmd_vx = 0
    cmd_vy = 0
    vland = (LAND_SPEED/100)
    if qralt>landDesent:
        cmd_vz = vland
    else:
        cmd_vz = math.sqrt(abs((qralt-.1)/.3))*vland
    local_vel_msg_factory(vehicle,cmd_vx, cmd_vy, cmd_vz)

def marker_landing(vehicle,IDs_Dict,qralt,wamv_landing,spawn_height,newimg_pub,msg):
    IDs_Dict, k2, zoffset = id_finder(vehicle, IDs_Dict, newimg_pub, qralt)
    
    x_avg = IDs_Dict.loc['xloc'][k2]
    y_avg = IDs_Dict.loc['yloc'][k2]
    #Coordinate system local 
    #Camera +X is local East, Camera +Y is local North
    #MAVLINK wants +X to be local North and +Y to be local East
    y_ang, x_ang = avg_to_ang(x_avg, y_avg)
    x_ang = -x_ang
    
    if zoffset < 1:
        zoffset = qralt
    
    vland = LAND_SPEED/100
    tland = zoffset/vland
    dx = math.atan(x_ang)*qralt
    dy = math.atan(y_ang)*qralt
    vx = dx/tland
    vy = dy/tland
    if qralt>landDesent:
        vz = vland
    else:
        vz = math.sqrt(abs((qralt-.1)/.3))*vland
    print('Marker at x:',dx,' y:',dy,' z:',zoffset)
    if wamv_landing:
        cmd_vx, cmd_vy, cmd_vz = wamv_vel_adder(vehicle,vx,vy,vz,msg)
    else:
        cmd_vx = vx
        cmd_vy = vy
        cmd_vz = vz
    local_vel_msg_factory(vehicle,cmd_vx, cmd_vy, cmd_vz)
    return IDs_Dict, k2

#%% #################   IMAGE PROCESSING   #################
def get_marker_location(corners, size, matrix, dist_coeff):
    ret = aruco.estimatePoseSingleMarkers(corners,size, \
        cameraMatrix=matrix,distCoeffs=dist_coeff)
    (rvec, tvec) = (ret[0][0,0,:], ret[1][0,0,:])  # rotation vctr and translation vctr                                 

    xcorns = [corners[0][0][0],corners[0][1][0],corners[0][2][0],corners[0][3][0]]
    ycorns = [corners[0][0][1],corners[0][1][1],corners[0][2][1],corners[0][3][1]]
    
    xavg = sum(xcorns)/4
    yavg = sum(ycorns)/4
    return xavg,yavg


def id_finder(vehicle, IDs_Dict, newimg_pub, curalt):
    np_data=2
    (corners, idstemp, rejected) = camera_funct()
    final_id_to_find = IDs_Dict.columns[0]
    num_ids = len(IDs_Dict.columns)
    
     
    ID_heights = IDs_Dict.loc['height'].to_numpy()
    land_id_to_find = np.argwhere(curalt<=ID_heights)
    if any(land_id_to_find):
        land_id_to_find = IDs_Dict.columns[land_id_to_find[0][0]]
        iloc = np.argwhere(IDs_Dict.columns == land_id_to_find)[0][0]
        if land_id_to_find != final_id_to_find: #If marker is not final landing adjust height to next smallest h threshold
            offset = curalt-IDs_Dict.loc['height'].iloc[iloc-1]
        else: #If final marker set heigh goal to landing threshold
            offset = curalt-landThreshold
    else:
        iloc = num_ids-1
        land_id_to_find = IDs_Dict.columns[iloc]
        offset = curalt-IDs_Dict.loc['height'][land_id_to_find]
        
    marker_size = IDs_Dict.loc['size'][land_id_to_find]
    
    #If any markers are found
    if idstemp is not None:
        ids = [x[0] for x in idstemp]
        idsizes = [IDs_Dict.loc['size'][x] for x in ids]

        rvec = [list()]*num_ids
        tvec = [list()]*num_ids
        #Update marker dictonary with newest positional information
        for i in range(0,num_ids):
            if IDs_Dict.columns[i] in ids:
                k = np.where(np.array(ids)==IDs_Dict.columns[i])[0][0]
                xavg, yavg, rvec[i], tvec[i] = get_marker_location(corners[k], idsizes[k],\
                                                    np_camera_matrix, np_dist_coeff)
                
                
                # Updating dictonary with recent relative positions
                IDs_Dict.loc['xloc'].iloc[i] = xavg
                IDs_Dict.loc['yloc'].iloc[i] = yavg
                IDs_Dict.loc['lastT'].iloc[i] = time.time()
        
        #If target marker found update found count and start descending
        if land_id_to_find in ids:
            IDs_Dict[land_id_to_find].loc['fcount'] += 1
            id_to_find = land_id_to_find
            reroutetag = False
            landtag = True
        
        #If target marker not found
        else:
            IDs_Dict[land_id_to_find].loc['nfcount'] += 1
            deltaT = time.time()-IDs_Dict[land_id_to_find].loc['lastT']
            timelim = 2
            #If target marker was recently lost continue using last known pos
            if deltaT < timelim:
                print("Target Not Found: Using last pos found "+\
                      '%0.5f seconds ago'%deltaT)
                id_to_find = land_id_to_find
                reroutetag = False
                landtag = True
            #If target was lost 'timelim' time ago reroute to smallest found marker
            else:
                id_to_find = np.argmin(idsizes)
                reroutetag = True
                landtag = False
                print("Target Not Found: Heading to ID ",id_to_find)
        
        #Get target marker locations
        k2 = np.where(IDs_Dict.columns==id_to_find)[0][0]

        marker_position = 'Marker Position: x='+str(IDs_Dict.loc['xloc'][id_to_find])+\
            ' y='+str(IDs_Dict.loc['yloc'][id_to_find])+' z='+str(curalt)+''
            
        
        #Overlay marker details in camera publisher
        aruco.drawDetectedMarkers(np_data, corners)
        aruco.drawAxis(np_data, np_camera_matrix, np_dist_coeff, rvec[k2], tvec[k2], 10)  
        cv2.putText(np_data, marker_position, (10,50), 0, 0.7, (255, 0,0), thickness=2)
        #print('FOUND COUNT:'+str(IDs_Dict.columns.values)+str(IDs_Dict.loc['fcount'].values)\
        #      +" NOT FOUND COUNT:"+str(IDs_Dict.columns.values)+str(IDs_Dict.loc['nfcount'].values)+'\n\n')
        
        #If no markers are found
    else: 
        IDs_Dict[land_id_to_find].loc['nfcount'] += 1
        
        
    #Take new photo and make next message
    new_msg = image_from_numpy(np_data, "rgb8")
    newimg_pub.publish(new_msg)
    
    return IDs_Dict, k2, offset
    
