# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /home/govind/Downloads/CLion-2020.2.1/clion-2020.2.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/govind/Downloads/CLion-2020.2.1/clion-2020.2.1/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/govind/Desktop/HackerRank_CPP/HackerRank_CPP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/govind/Desktop/HackerRank_CPP/HackerRank_CPP/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/rectangle_area.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/rectangle_area.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rectangle_area.dir/flags.make

CMakeFiles/rectangle_area.dir/rectangle_area.cpp.o: CMakeFiles/rectangle_area.dir/flags.make
CMakeFiles/rectangle_area.dir/rectangle_area.cpp.o: ../rectangle_area.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/govind/Desktop/HackerRank_CPP/HackerRank_CPP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/rectangle_area.dir/rectangle_area.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rectangle_area.dir/rectangle_area.cpp.o -c /home/govind/Desktop/HackerRank_CPP/HackerRank_CPP/rectangle_area.cpp

CMakeFiles/rectangle_area.dir/rectangle_area.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rectangle_area.dir/rectangle_area.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/govind/Desktop/HackerRank_CPP/HackerRank_CPP/rectangle_area.cpp > CMakeFiles/rectangle_area.dir/rectangle_area.cpp.i

CMakeFiles/rectangle_area.dir/rectangle_area.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rectangle_area.dir/rectangle_area.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/govind/Desktop/HackerRank_CPP/HackerRank_CPP/rectangle_area.cpp -o CMakeFiles/rectangle_area.dir/rectangle_area.cpp.s

# Object files for target rectangle_area
rectangle_area_OBJECTS = \
"CMakeFiles/rectangle_area.dir/rectangle_area.cpp.o"

# External object files for target rectangle_area
rectangle_area_EXTERNAL_OBJECTS =

rectangle_area: CMakeFiles/rectangle_area.dir/rectangle_area.cpp.o
rectangle_area: CMakeFiles/rectangle_area.dir/build.make
rectangle_area: CMakeFiles/rectangle_area.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/govind/Desktop/HackerRank_CPP/HackerRank_CPP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable rectangle_area"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rectangle_area.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rectangle_area.dir/build: rectangle_area

.PHONY : CMakeFiles/rectangle_area.dir/build

CMakeFiles/rectangle_area.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rectangle_area.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rectangle_area.dir/clean

CMakeFiles/rectangle_area.dir/depend:
	cd /home/govind/Desktop/HackerRank_CPP/HackerRank_CPP/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/govind/Desktop/HackerRank_CPP/HackerRank_CPP /home/govind/Desktop/HackerRank_CPP/HackerRank_CPP /home/govind/Desktop/HackerRank_CPP/HackerRank_CPP/cmake-build-debug /home/govind/Desktop/HackerRank_CPP/HackerRank_CPP/cmake-build-debug /home/govind/Desktop/HackerRank_CPP/HackerRank_CPP/cmake-build-debug/CMakeFiles/rectangle_area.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rectangle_area.dir/depend

