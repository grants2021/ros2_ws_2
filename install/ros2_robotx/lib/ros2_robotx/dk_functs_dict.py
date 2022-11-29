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
import imutils


import cv2
import cv2.aruco as aruco
from cv_bridge import CvBridge

from dronekit import connect, VehicleMode, LocationGlobalRelative, LocationGlobal, APIException
from pymavlink import mavutil   

#%% #################   CONSTANTS   #################

aruco_dict = aruco.getPredefinedDictionary(aruco.DICT_ARUCO_ORIGINAL)
aruco_parameters = aruco.DetectorParameters_create()
wamv_height = 1.5
drone_height = 0.194923
LAND_SPEED = 20
landThreshold = 0.11
landDesent = 0.4
camera_matrix = [[530.8269276712998, 0.0, 320.5],[0.0, 530.8269276712998, 240.5],[0.0, 0.0, 1.0]]
np_camera_matrix = np.array(camera_matrix)
dist_coeff = [0.0, 0.0, 0.0, 0.0, 0.0]
np_dist_coeff = np.array(dist_coeff)
horizontal_res = 1920
vertical_res = 1448
cam_height = 320
cam_width = 320
horizontal_fov = 62.2 * (math.pi / 180)  # convert to radians 
vertical_fov = 48.8 * (math.pi / 180) 



#%% #################   CALCULATIONS   #################
def get_true_abs_height(vehicle, spawn_height):
    return vehicle.location.global_relative_frame.alt+spawn_height

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
    
def dists_to_latlong(targetmove):
        dLat_m = targetmove[0]/1.113195e5
        dLon_m = targetmove[1]/1.113195e5
        dTot_m = math.sqrt((dLon_m**2)+(dLat_m**2))
        return(dLat_m,dLon_m,dTot_m)

def latlong_plus_dists(currentLocation,targetmove):
    targetLoc = LocationGlobalRelative
    targetLoc.lat = targetmove[0]/1.113195e5+currentLocation.lat
    targetLoc.lon = targetmove[1]/1.113195e5+currentLocation.lon
    totaldist = np.hypot(targetmove[0],targetmove[1])
    return targetLoc, totaldist
    

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

def ang_to_dists(x_ang, y_ang, alt):
    x_dist = math.atan(x_ang)*alt
    y_dist = math.atan(y_ang)*alt
    return x_dist, y_dist
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

def generate_grid(horz_bound,vert_bound,passes,fheight):
    d_vert = (vert_bound[1]-vert_bound[0])/passes
    d_horz = horz_bound[1]-horz_bound[0]
    points_list = [[horz_bound[0],d_vert,fheight]]
    for i in range(0,(passes-1)//2):
        points_list.append([d_horz,0,fheight])
        points_list.append([0,d_vert,fheight])
        points_list.append([-d_horz,0,fheight])
        points_list.append([0,d_vert,fheight])
    points_list.append([d_horz,0,fheight])
    return points_list


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

def goto_local_action(vehicle, target_move, current_loc, goto_stagein, total_dist, target_loc):
    #print(goto_stagein)
    if not hasattr(target_loc, 'lat'):
        taget_loc,total_dist = latlong_plus_dists(current_loc,target_move)
        print(current_loc.lat,current_loc.lon)
        print(target_loc.lat,target_loc.lon,total_dist)
    if goto_stagein == 0:
        goto_gps(vehicle, target_loc, target_move[-1])
        goto_stageout = 1
    elif goto_stagein == 1:
        currentDistance = latlong_to_dists(vehicle, target_loc, current_loc)[-1]
        #print(currentDistance)
        if currentDistance >= total_dist*0.01 and currentDistance >= 0.05:
            goto_gps(vehicle, target_loc, target_move[-1])
            goto_stageout = 1
        else:
            goto_stageout = 2
    elif goto_stagein == 2:
        goto_stageout = 2
    else:
        goto_stageout = -1
    #print(goto_stageout)
    return goto_stageout, total_dist, target_loc

def goto_global_action(vehicle, target_loc, target_height, current_loc, goto_stagein, total_dist):
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


def landing_trailoff(vehicle,qralt,land_stagein):
    if qralt <= landThreshold and land_stagein <= 3:
        landing_cutoff(vehicle)
        land_stageout = 4
        land_stagein = 4
    if land_stagein == 4:
        cutoffresult = landing_finisher(vehicle)
        if cutoffresult:
            vehicle.armed = False
            land_stageout = 5
            time.sleep(0.001)
        else:
            land_stageout = 4
    elif land_stagein == 5:
        if not vehicle.armed:
            land_stageout = 10
        else:
            land_stageout = 5
    return land_stageout

def landing_finisher(vehicle):
    if abs(vehicle.velocity[-1])<=abs(LAND_SPEED/120):
        print('Landed')
        return True
    else:
        print('Still moving')
        return False

def landing_cutoff(vehicle): 
    print('Cutting Power')
    attitude_msg_factory(vehicle,0)

def land_free(vehicle,qralt):
    cmd_vx = 0
    cmd_vy = 0
    vland = (LAND_SPEED/100)
    if qralt>=landDesent:
        cmd_vz = vland
    else:
        cmd_vz = math.sqrt(abs((qralt-.1)/.3))*vland
    local_vel_msg_factory(vehicle,cmd_vx, cmd_vy, cmd_vz)

def land_msg_send(vehicle, vx, vy, vland, qralt, wamv_landing, msg):
    if qralt>landDesent:
        vz = vland
    else:
        vz = math.sqrt(abs((qralt-.1)/.3))*vland
    
    if wamv_landing:
        cmd_vx, cmd_vy, cmd_vz = wamv_vel_adder(vehicle,vx,vy,vz,msg)
    else:
        cmd_vx = vx
        cmd_vy = vy
        cmd_vz = vz
    local_vel_msg_factory(vehicle,cmd_vx, cmd_vy, cmd_vz)
    

def land_pad(vehicle, RF_height, land_stagein, bridge, newimg_pub, new_img, landloc):
    qralt = vehicle.rangefinder.distance - RF_height
    
    if qralt <= landThreshold:
        land_stageout = landing_trailoff(vehicle,qralt,land_stagein)
    else:
        if qralt>landDesent:
            land_stageout = 2
        else:
            land_stageout = 3
            
        x_ang, y_ang, vz = landloc#landing_pad_finder(vehicle, new_img, qralt, bridge, newimg_pub)
        x_ang = -x_ang
        
        zoffset = qralt-landThreshold
        if zoffset < 1:
            zoffset = qralt
        
        if zoffset > 2:
            vland = LAND_SPEED/50
        else:
            vland = LAND_SPEED/100
        
        tland = zoffset/vland
        dx = math.atan(x_ang)*qralt
        dy = math.atan(y_ang)*qralt
        vx = -dy/tland
        vy = dx/tland
        print('Marker at x:',dx,' y:',dy,' z:',zoffset)
        print('Sending vel vx:',vx,' vy:',vy,' vz:',vland)
        land_msg_send(vehicle, vx, vy, vz*vland, qralt, False, 0)
    return land_stageout
    
    
    
def land_marker(vehicle,land_stagein,RF_height,IDs_Dict,k2_last,spawn_height,bridge,newimg_pub,new_img,newmsg):
    k2 = -1
    #qralt = vehicle.rangefinder.distance - RF_height
    qralt = get_true_QR_relative_height(vehicle, spawn_height, True)
    if qralt <= landThreshold:
        land_stageout = landing_trailoff(vehicle,qralt,land_stagein)
    else:
        if qralt>landDesent:
            land_stageout = 2
        else:
            land_stageout = 3
            
        IDs_Dict, k2, zoffset = id_finder(vehicle, new_img, newimg_pub,qralt,bridge,IDs_Dict)
        x_avg = IDs_Dict.loc['xloc'].iloc[k2]
        y_avg = IDs_Dict.loc['yloc'].iloc[k2]
        #Coordinate system local 
        #Camera +X is local East, Camera +Y is local North
        #MAVLINK wants +X to be local North and +Y to be local East
        y_ang, x_ang = avg_to_ang(x_avg, y_avg)
        x_ang = x_ang
        
        if zoffset < 1:
            zoffset = qralt
        
        if zoffset > 2:
            vland = LAND_SPEED/50
        else:
            vland = LAND_SPEED/100
        
        tland = zoffset/vland
        dx = math.atan(x_ang)*qralt
        dy = math.atan(y_ang)*qralt
        vx = -dx/tland
        vy = dy/tland
        print('Marker at x:',dx,' y:',dy,' z:',zoffset)
        print('Sending vel vx:',vx,' vy:',vy,' vz:',vland)
        land_msg_send(vehicle, vx, vy, vland, qralt, False, 0)
    return land_stageout, k2

#%% #################   IMAGE PROCESSING   #################
class ShapeDetector:
	def __init__(self):
		pass
	def detect(self,c):
		# initialize the shape name and approximate contour 
		shape = 'unidentified'
		peri = cv2.arcLength(c, True)
		approx = cv2.approxPolyDP(c, 0.04*peri, True)
		# approximate bounding boxes for each shape
		min_x = 10000
		max_x = 0
		min_y = 10000
		max_y = 0
		for point in c:
            
            		x = point[0][0]
            		y = point[0][1]
    
            		if x > max_x:
                		max_x= x

            		if x < min_x: 
                		min_x = x

            		if y > max_y:
                		max_y= y

            		if y < min_y: 
                		min_y = y
		dX = max_x - min_x
		dY = max_y - min_y
		ratio = dX/(dY+ 0.00001)

		if len(approx) ==3:
			shape = "triangle"

		elif len(approx) == 4: 
			(x,y,w,h) = cv2.boundingRect(approx)
			ar = w/float(h)

			shape = "square" if ar >= 0.95 and ar <= 1.05 else "rectangle"

		elif len(approx) == 5: 
			shape = "pentagon"
			
		elif (len(approx) >=5 and (0.9 <= ratio <= 1.1)):
            		# ciricle should have approximately square bounding box
           		 shape = "circle" 

		else: 
			shape = 'polygon'

		return shape, max_x, min_x, max_y, min_y 

def camera_funct(vehicle,image):
    #orig = image.copy()
    (origH, origW) = image.shape[:2]
    # set the new width and height and then determine the ratio in change
    # for both the width and height
    (newW, newH) = (cam_width, cam_height)
    #rW = origW / float(newW)
    #rH = origH / float(newH)
    # resize the image and grab the new image dimensions
    image = cv2.resize(image, (newW, newH))
    (H, W) = image.shape[:2]
    imgHSL = cv2.cvtColor(image, cv2.COLOR_BGR2HLS)
    Lchannel = imgHSL[:, :, 1]
    mask = cv2.inRange(Lchannel, 150, 255)
    thresh = cv2.bitwise_and(image, image, mask=mask)
    canny = cv2.Canny(thresh, 50, 150)
    kernels = np.ones(3)
    dilated = cv2.dilate(canny, kernels, iterations = 1)
    cnts = cv2.findContours(dilated, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
    cnts = imutils.grab_contours(cnts)
    return cnts, dilated

        

def landing_pad_finder(vehicle, new_img, current_alt, bridge, newimg_pub):
    #print('Scanning')
    sd = ShapeDetector()
    cnts, image = camera_funct(vehicle, new_img)
    if current_alt >= 1.0:
        target_shape = ["rectangle","square",'circle']
        target_size = 50
    else:
        target_shape = ["polygon","circle"] 
        target_size = 40
    try:
        cX = 0
        cY = 0
        
        #print('Found {} shapes'.format(len(cnts)))
        targetsFound = 0
        x_ang = list()
        y_ang = list()
        dx = list()
        dy = list()
        for c in cnts:
            # compute the shape of the contour
            
            shape, max_x, min_x, max_y, min_y = sd.detect(c)
            
            #print(f"Found shape {shape}")
            dx.append(max_x - min_x)
            dy.append(max_y - min_y)
            if shape in target_shape and dx[-1] > target_size and dy[-1] > target_size:
                #print(f"found target: {target_shape}")
                targetsFound += 1
                M = cv2.moments(c)
                cX = int(M['m10']/M['m00'])
                cY = int(M['m01']/M['m00'])
                
                # use the center point to guide precision landing
                #x_ang.append((cX - horizontal_res*0.5)*horizontal_fov/horizontal_res)
                #y_ang.append((cY - vertical_res*0.5)*vertical_fov/vertical_res)
                x_ang.append((cX - cam_width*0.5)*horizontal_fov/cam_width)
                y_ang.append((cY - cam_height*0.5)*vertical_fov/cam_height)
                
                # draw the contours
                cv2.drawContours(image, [c], -1, (0,255,255), 2)
        if len(image.shape) == 3:
            newimg_pub.publish(bridge.cv2_to_imgmsg(image, 'rgb8'))
        elif len(image.shape) == 2:
            newimg_pub.publish(bridge.cv2_to_imgmsg(image, 'mono8'))
                
        if x_ang:
            largest_shape = np.argmax(dx)
            return x_ang[largest_shape], y_ang[largest_shape]
        else:
            #print('Found no target shapes')
            return -1, -1
                
    except:
        print('Target likely not found. Error')
        return -1,-1

def get_marker_location(corners, size, matrix, dist_coeff):
    ret = aruco.estimatePoseSingleMarkers(corners,size, \
        cameraMatrix=matrix,distCoeffs=dist_coeff)
    (rvec, tvec) = (ret[0][0,0,:], ret[1][0,0,:])  # rotation vctr and translation vctr                                 

    xcorns = [corners[0][0][0],corners[0][1][0],corners[0][2][0],corners[0][3][0]]
    ycorns = [corners[0][0][1],corners[0][1][1],corners[0][2][1],corners[0][3][1]]
    
    xavg = sum(xcorns)/4
    yavg = sum(ycorns)/4
    return xavg,yavg,rvec,tvec

def id_finder(vehicle, image, newimg_pub, curalt, bridge,IDs_Dict):
    k2 = -1
    gray_img = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
    (corners, idstemp, rejected) = aruco.detectMarkers(image=gray_img, dictionary=aruco_dict, parameters=aruco_parameters)
    #camera_funct()
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
            offset = curalt-landDesent
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
                xavg, yavg, rvec[k], tvec[k] = get_marker_location(corners[k], idsizes[k],\
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
        if landtag:
            k2 = np.where(IDs_Dict.columns==id_to_find)[0][0]
    
            marker_position = 'Marker Position: x='+str(IDs_Dict.loc['xloc'][id_to_find])+\
                ' y='+str(IDs_Dict.loc['yloc'][id_to_find])+' z='+str(curalt)+''
                
            
            #Overlay marker details in camera publisher
            if any(rvec[k2]):
                aruco.drawDetectedMarkers(image, corners)
                aruco.drawAxis(image, np_camera_matrix, np_dist_coeff, rvec[k2], tvec[k2], 10)  
                cv2.putText(image, marker_position, (10,50), 0, 0.7, (255, 0,0), thickness=2)
        else:
            k2 = -1
        #print('FOUND COUNT:'+str(IDs_Dict.columns.values)+str(IDs_Dict.loc['fcount'].values)\
        #      +" NOT FOUND COUNT:"+str(IDs_Dict.columns.values)+str(IDs_Dict.loc['nfcount'].values)+'\n\n')
        
        #If no markers are found
    else: 
        IDs_Dict[land_id_to_find].loc['nfcount'] += 1
        
        
    #Take new photo and make next message
    newimg_pub.publish(bridge.cv2_to_imgmsg(image, 'rgb8'))
    
    return IDs_Dict, k2, offset
    

