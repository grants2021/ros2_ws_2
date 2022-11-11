cmake_minimum_required(VERSION 3.5)
project(robotx_2022)

###############################################################################
# Compile as C++11, supported in ROS Kinetic and newer

#set(CMAKE_CXX_STANDARD 11)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)

# For this package set as C++14
include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++14" COMPILER_SUPPORTS_CXX14)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
if(COMPILER_SUPPORTS_CXX14)
    set(CMAKE_CXX_FLAGS "-std=c++14")
elseif(COMPILER_SUPPORTS_CXX0X)
    set(CMAKE_CXX_FLAGS "-std=c++0x")
else()
    message(FATAL_ERROR "The compiler ${CMAKE_CXX_COMPILER} has no C++14 support. Please use a different C++ compiler.")
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

###############################################################################
# Other dependencies...

find_package(ament_cmake REQUIRED
  gazebo_dev
  geographic_msgs
  message_generation
  roscpp
  rospy
  std_msgs
  wamv_gazebo
  wave_gazebo
  xacro
  vrx_gazebo)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Core REQUIRED)
find_package(Protobuf REQUIRED)
find_package(gazebo REQUIRED)
find_package(ament_cmake_python REQUIRED)

# We need erb to process the .world.erb files.
find_program(ERB_EXE_PATH erb)
if(NOT ERB_EXE_PATH)
  message(FATAL_ERROR "Could not find the `erb` tool.  Try `sudo apt-get install ruby`")
endif()

########################
## Message generation ##
########################



set(INCLUDE_DIRS
  ${PROJECT_SOURCE_DIR}/include 
  ${catkin_INCLUDE_DIRS}
  ${Qt5Core_INCLUDE_DIRS}
  ${QT_USE_FILE}
  ${GAZEBO_INCLUDE_DIRS}
  ${CMAKE_CURRENT_BINARY_DIR}
)

include_directories(${INCLUDE_DIRS})

link_directories(
  ${GAZEBO_LIBRARY_DIRS} 
  ${CMAKE_CURRENT_BINARY_DIR}
  )

link_libraries(
        ${GAZEBO_LIBRARIES}
        )

set (plugins_single_header
        ArduPilotPlugin
        ArduCopterIRLockPlugin
        GimbalSmall2dPlugin
        )

add_library(ArduCopterIRLockPlugin SHARED src/ArduCopterIRLockPlugin.cc)
target_link_libraries(ArduCopterIRLockPlugin ${GAZEBO_LIBRARIES})

add_library(ArduPilotPlugin SHARED src/ArduPilotPlugin.cc)
target_link_libraries(ArduPilotPlugin ${GAZEBO_LIBRARIES})


#install(TARGETS ArduCopterIRLockPlugin DESTINATION ${GAZEBO_PLUGIN_PATH})
#install(TARGETS ArduPilotPlugin DESTINATION ${GAZEBO_PLUGIN_PATH})

#install(DIRECTORY models DESTINATION ${GAZEBO_MODEL_PATH}/..)
#install(DIRECTORY worlds DESTINATION ${GAZEBO_MODEL_PATH}/..)

# Install all the config files
install(DIRECTORY config/
  DESTINATION share/${PROJECT_NAME}/config)

# Install all the world files
install(DIRECTORY worlds/
  DESTINATION share/${PROJECT_NAME}/worlds)

# Install all the model files
install(DIRECTORY models/
  DESTINATION share/${PROJECT_NAME}/models)

# Install all the launch files
install(DIRECTORY launch/
  DESTINATION share/${PROJECT_NAME}/launch)

install(DIRECTORY include/
  DESTINATION include/${PROJECT_NAME}
  FILES_MATCHING PATTERN "*.hh"
)
  
# Python Scripts
set(PYTHON_SCRIPTS 
  nodes/boat_twist.py
  nodes/wamv_dk_functions.py
  nodes/spare_node.py
)

install(PROGRAMS ${PYTHON_SCRIPTS}
  DESTINATION lib/${PROJECT_NAME})
  
ament_export_include_directories(${INCLUDE_DIRS})

ament_package()

