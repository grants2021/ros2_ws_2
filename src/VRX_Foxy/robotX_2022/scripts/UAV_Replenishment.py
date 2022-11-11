#!/usr/bin/python
import sys
sys.path.append(r'/home/grant/vrx_ws/src/adept-vrx/robotX_2022/nodes')
sys.path.append(r'/opt/ros/foxy/lib/python3.8/site-packages')

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import Bool
import cv2
import cv2.aruco as aruco 
import time
import math
import numpy as np
import pandas as pd
from dronekit import connect, VehicleMode, LocationGlobalRelative, LocationGlobal, APIException
from pymavlink import mavutil    
from array import array 
import dict_dk_functions as dkf 
import os



rclpy.init()

connection_string = "udp:127.0.0.1:14550"
# Connect to the Vehicle.
print("Connecting to vehicle on: %s" % (connection_string))
vehicle = connect(connection_string, wait_ready=True)
spawn_height = 0 #ground = 0 WAMV = 1.3 Platform = 1.33
takeoff_height = 5 #m 
flight_height = takeoff_height

#%%
#####Task Landing Values#####
LP_ids = [0,1] #0 = empty 1 = full
LP_sizes = [200,200] #cm
LP_heights = [7,7]
wamv_landing = False

LP_found_count = [0]*len(LP_ids)
LP_notfound_count = [0]*len(LP_ids)
LP_enotfound_count = [0]*len(LP_ids)
#LP_latloc = [0]*len(LP_ids)
#LP_longloc = [0]*len(LP_ids)
LP_latlong = [0]*len(LP_ids)
LP_last_seen = [0]*len(LP_ids)

'''
LP_Dict = pd.DataFrame([LP_sizes,LP_heights,LP_found_count,\
                        LP_notfound_count,LP_enotfound_count,LP_latloc,LP_longloc,\
                            LP_last_seen],columns=LP_ids,
                           index=['size','height','fcount','nfcount','enfcount',\
                                  'latloc','longloc','lastT'])
'''
LP_Dict = pd.DataFrame([LP_sizes,LP_heights,LP_found_count,\
                        LP_notfound_count,LP_enotfound_count,LP_latlong,\
                            LP_last_seen],columns=LP_ids,
                           index=['size','height','fcount','nfcount','enfcount',\
                                  'latlong','lastT'])

#%%
#####Replinish Disk Values#####
Disk_ids = [0,1,2] #0 = R 1 = G 2 = B
Disk_target = [1,0,0]
Disk_sizes = [8.42,8.42,8.42] #cm
wamv_landing = False

Disk_found_count = [0]*len(Disk_ids)
Disk_notfound_count = [0]*len(Disk_ids)
Disk_enotfound_count = [0]*len(Disk_ids)
Disk_x_avg = [0]*len(Disk_ids)
Disk_y_avg = [0]*len(Disk_ids)
Disk_last_seen = [0]*len(Disk_ids)

Disk_Dict = pd.DataFrame([Disk_sizes,Disk_found_count,\
                        Disk_notfound_count,Disk_enotfound_count,Disk_x_avg,Disk_y_avg,\
                            Disk_last_seen,Disk_target],columns=Disk_ids,
                           index=['size','fcount','nfcount','enfcount',\
                                  'xloc','yloc','lastT','target'])
    

#%%
#####WAMV Landing values#####
ids_to_find = [72,129]
marker_sizes = [20.0,40.0] #cm
marker_heights = [4,7]
follow_time = 20
wamv_landing = True

found_count = [0]*len(ids_to_find)
notfound_count = [0]*len(ids_to_find)
enotfound_count = [0]*len(ids_to_find)
x_avg = [0]*len(ids_to_find)
y_avg = [0]*len(ids_to_find)
last_seen = [0]*len(ids_to_find)

IDsDict = pd.DataFrame([marker_sizes,marker_heights,found_count,notfound_count,\
                            enotfound_count,x_avg,y_avg,\
                                last_seen],columns=ids_to_find,
                           index=['size','height','fcount','nfcount','enfcount',\
                                  'xloc','yloc','lastT'])
#%%
drone_node = rclpy.create_node('drone_node')


takeoff_pub = drone_node.create_publisher(Bool,'/drone/takeoff_tag', 1)    
takeoff_msg = Bool() 
takeoff_msg.data=False
takeoff_pub.publish(takeoff_msg)

aruco_dict = aruco.getPredefinedDictionary(aruco.DICT_ARUCO_ORIGINAL)
parameters = aruco.DetectorParameters_create()

#%%
'''
@vehicle.on_message('WARNING')
def lisetener(self, message):
    print(message,'------------------')
'''
#%%
######Camera intrinsics######
horizontal_res = 640
vertical_res = 480

horizontal_fov = 62.2 * (math.pi / 180)  # convert to radians 
vertical_fov = 48.8 * (math.pi / 180)  # convert to radians 

found_count = 0 
notfound_count = 0 



dist_coeff = [0.0, 0.0, 0.0, 0.0, 0.0]  # from the rostopic camera info
camera_matrix = [[530.8269276712998, 0.0, 320.5],[0.0, 530.8269276712998, 240.5],[0.0, 0.0, 1.0]]
np_camera_matrix = np.array(camera_matrix)
np_dist_coeff = np.array(dist_coeff)

time_last = 0 
time_to_wait = 0.1 

#%%
#####Main Script#####

if __name__ == "__main__":
    try: 
        drone = dkf.Drone(vehicle,drone_node,IDsDict,LP_Dict,Disk_Dict,takeoff_height,spawn_height)

        print('Connected...')
        #print(str(drone.vehicle.mode)=='VehicleMode:GUIDED')
        
        
        if not str(drone.vehicle.mode)=='VehicleMode:GUIDED':
            drone.arm_and_takeoff()
            takeoff_msg.data = True
            takeoff_pub.publish(takeoff_msg)
            startloc = drone.vehicle.location.global_relative_frame
            drone.goto_position_target_local_ned(10,5,-flight_height)
            endloc = drone.vehicle.location.global_relative_frame
        time.sleep(5)
        endloc2=vehicle.location.global_relative_frame
        #drone.send_local_ned_velocity(5,0,0)
        #LP_Dict, Disk_Dict, out_message = drone.simple_look(LP_Dict,Disk_Dict)
        '''startTime = time.time()
        print('starting keydrive follow')
        while time.time()<=startTime+30:
            drone.keydrive_vel_follower(0)
            
        print('ending keydrive follow')
        
        alldone = drone.landing_subscriber(IDsDict,wamv_landing)
        while drone.vehicle.armed == True or not rclpy.is_shutdown() or not alldone:
            try:    
                print('Waiting for disarm...')
                time.sleep(0.1)
            except rospy.ROSInterruptException or APIException or KeyboardInterrupt or SystemExit:
                break
            finally:
                break
            
            LP_Dict, Disk_Dict, out_message = drone.simple_look(LP_Dict,Disk_Dict)
            sub = rospy.Subscriber('/camera/color/image_raw', Image, drone.platform_search)
            sub.unregister()
            '''
    except APIException or KeyboardInterrupt or SystemExit as e:
        print('Drone Core Loop Break')
        print(e)
        pass
    finally:
        pass
        #sys.exit()
        #os.system('killall gazebo')
#sys.exit()


