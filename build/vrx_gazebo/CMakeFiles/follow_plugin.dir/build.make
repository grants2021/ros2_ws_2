# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/grant/ros2_ws/src/VRX_Foxy/vrx_gazebo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/grant/ros2_ws/build/vrx_gazebo

# Include any dependencies generated for this target.
include CMakeFiles/follow_plugin.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/follow_plugin.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/follow_plugin.dir/flags.make

CMakeFiles/follow_plugin.dir/src/follow_plugin.cc.o: CMakeFiles/follow_plugin.dir/flags.make
CMakeFiles/follow_plugin.dir/src/follow_plugin.cc.o: /home/grant/ros2_ws/src/VRX_Foxy/vrx_gazebo/src/follow_plugin.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/grant/ros2_ws/build/vrx_gazebo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/follow_plugin.dir/src/follow_plugin.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/follow_plugin.dir/src/follow_plugin.cc.o -c /home/grant/ros2_ws/src/VRX_Foxy/vrx_gazebo/src/follow_plugin.cc

CMakeFiles/follow_plugin.dir/src/follow_plugin.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/follow_plugin.dir/src/follow_plugin.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/grant/ros2_ws/src/VRX_Foxy/vrx_gazebo/src/follow_plugin.cc > CMakeFiles/follow_plugin.dir/src/follow_plugin.cc.i

CMakeFiles/follow_plugin.dir/src/follow_plugin.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/follow_plugin.dir/src/follow_plugin.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/grant/ros2_ws/src/VRX_Foxy/vrx_gazebo/src/follow_plugin.cc -o CMakeFiles/follow_plugin.dir/src/follow_plugin.cc.s

# Object files for target follow_plugin
follow_plugin_OBJECTS = \
"CMakeFiles/follow_plugin.dir/src/follow_plugin.cc.o"

# External object files for target follow_plugin
follow_plugin_EXTERNAL_OBJECTS =

libfollow_plugin.so: CMakeFiles/follow_plugin.dir/src/follow_plugin.cc.o
libfollow_plugin.so: CMakeFiles/follow_plugin.dir/build.make
libfollow_plugin.so: libwaypoint_markers.so
libfollow_plugin.so: CMakeFiles/follow_plugin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/grant/ros2_ws/build/vrx_gazebo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libfollow_plugin.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/follow_plugin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/follow_plugin.dir/build: libfollow_plugin.so

.PHONY : CMakeFiles/follow_plugin.dir/build

CMakeFiles/follow_plugin.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/follow_plugin.dir/cmake_clean.cmake
.PHONY : CMakeFiles/follow_plugin.dir/clean

CMakeFiles/follow_plugin.dir/depend:
	cd /home/grant/ros2_ws/build/vrx_gazebo && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/grant/ros2_ws/src/VRX_Foxy/vrx_gazebo /home/grant/ros2_ws/src/VRX_Foxy/vrx_gazebo /home/grant/ros2_ws/build/vrx_gazebo /home/grant/ros2_ws/build/vrx_gazebo /home/grant/ros2_ws/build/vrx_gazebo/CMakeFiles/follow_plugin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/follow_plugin.dir/depend

