# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/liusheng/CLionProjects/Learn

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/liusheng/CLionProjects/Learn/build

# Include any dependencies generated for this target.
include CMakeFiles/Learn.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Learn.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Learn.dir/flags.make

CMakeFiles/Learn.dir/main.cpp.o: CMakeFiles/Learn.dir/flags.make
CMakeFiles/Learn.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/liusheng/CLionProjects/Learn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Learn.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Learn.dir/main.cpp.o -c /home/liusheng/CLionProjects/Learn/main.cpp

CMakeFiles/Learn.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Learn.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/liusheng/CLionProjects/Learn/main.cpp > CMakeFiles/Learn.dir/main.cpp.i

CMakeFiles/Learn.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Learn.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/liusheng/CLionProjects/Learn/main.cpp -o CMakeFiles/Learn.dir/main.cpp.s

# Object files for target Learn
Learn_OBJECTS = \
"CMakeFiles/Learn.dir/main.cpp.o"

# External object files for target Learn
Learn_EXTERNAL_OBJECTS =

Learn: CMakeFiles/Learn.dir/main.cpp.o
Learn: CMakeFiles/Learn.dir/build.make
Learn: src/libDemoFunctions.a
Learn: CMakeFiles/Learn.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/liusheng/CLionProjects/Learn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Learn"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Learn.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Learn.dir/build: Learn

.PHONY : CMakeFiles/Learn.dir/build

CMakeFiles/Learn.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Learn.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Learn.dir/clean

CMakeFiles/Learn.dir/depend:
	cd /home/liusheng/CLionProjects/Learn/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/liusheng/CLionProjects/Learn /home/liusheng/CLionProjects/Learn /home/liusheng/CLionProjects/Learn/build /home/liusheng/CLionProjects/Learn/build /home/liusheng/CLionProjects/Learn/build/CMakeFiles/Learn.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Learn.dir/depend

