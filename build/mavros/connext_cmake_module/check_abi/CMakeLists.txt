# Copyright 2016 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

cmake_minimum_required(VERSION 2.8.3)
project(connext_cmake_module_check_abi CXX)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic -Wl,--no-as-needed)
endif()

include_directories(/opt/rti.com/rti_connext_dds-5.3.1/include;/opt/rti.com/rti_connext_dds-5.3.1/include/ndds)
add_executable(exe
  "/home/grant/ros2_foxy/ros2-linux/share/connext_cmake_module/cmake/check_abi.cpp")
target_compile_definitions(exe PRIVATE RTI_LINUX;RTI_UNIX)
target_link_libraries(exe -Wl,--no-as-needed;optimized;/opt/rti.com/rti_connext_dds-5.3.1/lib/x64Linux3gcc5.4.0/libnddsc.so;optimized;/opt/rti.com/rti_connext_dds-5.3.1/lib/x64Linux3gcc5.4.0/libnddscore.so;optimized;/opt/rti.com/rti_connext_dds-5.3.1/lib/x64Linux3gcc5.4.0/libnddscpp.so;optimized;/opt/rti.com/rti_connext_dds-5.3.1/lib/x64Linux3gcc5.4.0/librticonnextmsgcpp.so;debug;/opt/rti.com/rti_connext_dds-5.3.1/lib/x64Linux3gcc5.4.0/libnddscd.so;debug;/opt/rti.com/rti_connext_dds-5.3.1/lib/x64Linux3gcc5.4.0/libnddscored.so;debug;/opt/rti.com/rti_connext_dds-5.3.1/lib/x64Linux3gcc5.4.0/libnddscppd.so;debug;/opt/rti.com/rti_connext_dds-5.3.1/lib/x64Linux3gcc5.4.0/librticonnextmsgcppd.so;pthread;dl;-Wl,--as-needed)
set_target_properties(exe
  PROPERTIES CXX_STANDARD 14)
