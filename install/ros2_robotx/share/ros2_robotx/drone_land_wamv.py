#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Oct 25 17:32:12 2022

@author: grant
"""

import sys
sys.path.append(r'/opt/ros/foxy/lib/python3.8/site-packages')

import os
import time
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.conditions import IfCondition, UnlessCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command, LaunchConfiguration, PythonExpression
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch_ros.parameter_descriptions import ParameterValue
import xacro

def generate_launch_description():
 
    # Set the path to the Gazebo ROS package
    pkg_gazebo_ros = FindPackageShare(package='gazebo_ros').find('gazebo_ros')   
     
    # Set the path to this package.
    pkg_share = FindPackageShare(package='robotx_2022').find('robotx_2022')
    
    wrlds_share = FindPackageShare(package='ros2_robotx').find('ros2_robotx')
    
    # Set the path to the world file
    world_file_name = 'grass_replenish_marker.world'#'2022_qualifying_task.world''flat_ocean_wplatform.world'
    
    world_path = os.path.join(wrlds_share, world_file_name)    
    
    # Set the path to the SDF model files.
    gazebo_models_path = os.path.join(pkg_share, 'models')
    #os.environ["GAZEBO_MODEL_PATH"] = [gazebo_models_path,wamv_models_path]
    
    # Set name to the Drone model file
    drone_model_name = 'iris_with_ardupilot'
    drone_model_path = os.path.join(gazebo_models_path,drone_model_name,'model.sdf')
    print(drone_model_path)
     
    
    ########### YOU DO NOT NEED TO CHANGE ANYTHING BELOW THIS LINE ##############  
    # Launch configuration variables specific to simulation
    headless = LaunchConfiguration('headless')
    use_sim_time = LaunchConfiguration('use_sim_time')
    use_simulator = LaunchConfiguration('use_simulator')
    verbose = LaunchConfiguration('verbose')
    world = LaunchConfiguration('world')
    drone_model = LaunchConfiguration('drone_model')
    wamv_model = LaunchConfiguration('wamv_model')
    
    declare_simulator_cmd = DeclareLaunchArgument(
      name='headless',
      default_value='False',
      description='Whether to execute gzclient')
       
    declare_use_sim_time_cmd = DeclareLaunchArgument(
      name='use_sim_time',
      default_value='true',
      description='Use simulation (Gazebo) clock if true')
     
    declare_use_simulator_cmd = DeclareLaunchArgument(
      name='use_simulator',
      default_value='True',
      description='Whether to start the simulator')
    
    declare_verbose_cmd = DeclareLaunchArgument(
      name='verbose',
      default_value='false',
      description='Verbose logging on off')
     
    declare_world_cmd = DeclareLaunchArgument(
      name='world',
      default_value=world_path,
      description='Full path to the world model file to load')
    
    declare_drone_model_path_cmd = DeclareLaunchArgument(
        name='drone_model',
        default_value=drone_model_path,
        description='Path to drone model SDF')
    
    declare_wamv_model_path_cmd = DeclareLaunchArgument(
        name='wamv_model',
        default_value=wamv_model_path,
        description='Path to wamv model SDF')
        
    # Specify the actions
     #parameters=[{'robot_description': ParameterValue(Command(['xacro ',str(wamv_model_path)]),value_type=str)}],
    # Start Gazebo server
    start_gazebo_server_cmd = IncludeLaunchDescription(
      PythonLaunchDescriptionSource(os.path.join(pkg_gazebo_ros, 'launch', 'gzserver.launch.py')),
      condition=IfCondition(use_simulator),
      launch_arguments={'world': world}.items())
      #launch_arguments={'world': world,'verbose':verbose}.items())
     
    # Start Gazebo client    
    start_gazebo_client_cmd = IncludeLaunchDescription(
      PythonLaunchDescriptionSource(os.path.join(pkg_gazebo_ros, 'launch', 'gzclient.launch.py')),
      condition=IfCondition(PythonExpression([use_simulator, ' and not ', headless])))
      #launch_arguments={'verbose':verbose}.items())
    
    # Add in models
    add_drone_gazebo_cmd = Node(package='gazebo_ros', executable='spawn_entity.py',
                      arguments=['-entity', 'iris_demo', '-file', drone_model,
                                 '-x','0',
                                 '-y','0',
                                 '-z','1.33'],
                      output='screen')
    
    add_wamv_gazebo_cmd = Node(package='gazebo_ros', executable='spawn_entity.py',
                      arguments=['-entity', 'WAM-V', '-topic', 'robot_description',
                                 '-x','-10',
                                 '-y','0',
                                 '-z','0'],
                      output='screen')
                      
    #add_drone_control_cmd = Node(package='robotx_2022', executable='drone_control.py')
    # Create the launch description and populate
    ld = LaunchDescription()
     
    # Declare the launch options
    ld.add_action(declare_simulator_cmd)
    ld.add_action(declare_use_sim_time_cmd)
    ld.add_action(declare_use_simulator_cmd)
    ld.add_action(declare_verbose_cmd)
    ld.add_action(declare_world_cmd)
    ld.add_action(declare_drone_model_path_cmd)
    ld.add_action(declare_wamv_model_path_cmd)

    # Add any actions
    ld.add_action(start_gazebo_server_cmd)
    ld.add_action(start_gazebo_client_cmd)
    ld.add_action(add_drone_gazebo_cmd)
    ld.add_action(add_wamv_gazebo_cmd)
    return ld

time.sleep(1)
os.system('xdotool key "ctrl+shift+t";xdotool type "~/ardupilot/Tools/autotest/sim_vehicle.py -f gazebo-iris --console -v ArduCopter";xdotool key Return')
