# CMake generated Testfile for 
# Source directory: /home/grant/ros2_ws/src/VRX_Foxy/usv_gazebo_plugins
# Build directory: /home/grant/ros2_ws/build/usv_gazebo_plugins
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(buoyancy_plugin_test "/home/grant/miniconda3/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/grant/ros2_ws/build/usv_gazebo_plugins/test_results/usv_gazebo_plugins/buoyancy_plugin_test.gtest.xml" "--package-name" "usv_gazebo_plugins" "--output-file" "/home/grant/ros2_ws/build/usv_gazebo_plugins/ament_cmake_gtest/buoyancy_plugin_test.txt" "--command" "/home/grant/ros2_ws/build/usv_gazebo_plugins/buoyancy_plugin_test" "--gtest_output=xml:/home/grant/ros2_ws/build/usv_gazebo_plugins/test_results/usv_gazebo_plugins/buoyancy_plugin_test.gtest.xml")
set_tests_properties(buoyancy_plugin_test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/grant/ros2_ws/build/usv_gazebo_plugins/buoyancy_plugin_test" TIMEOUT "60" WORKING_DIRECTORY "/home/grant/ros2_ws/build/usv_gazebo_plugins" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/grant/ros2_ws/src/VRX_Foxy/usv_gazebo_plugins/CMakeLists.txt;163;ament_add_gtest;/home/grant/ros2_ws/src/VRX_Foxy/usv_gazebo_plugins/CMakeLists.txt;0;")
subdirs("gtest")
