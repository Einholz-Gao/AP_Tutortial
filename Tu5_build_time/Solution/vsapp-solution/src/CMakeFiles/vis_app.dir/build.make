# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/einholz/[Studitum]/WS22|23/AP/Tutorial/Tu5_build_time/Solution/vsapp-solution/src"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/einholz/[Studitum]/WS22|23/AP/Tutorial/Tu5_build_time/Solution/vsapp-solution/src"

# Include any dependencies generated for this target.
include CMakeFiles/vis_app.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/vis_app.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/vis_app.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/vis_app.dir/flags.make

CMakeFiles/vis_app.dir/vis_app.cpp.o: CMakeFiles/vis_app.dir/flags.make
CMakeFiles/vis_app.dir/vis_app.cpp.o: vis_app.cpp
CMakeFiles/vis_app.dir/vis_app.cpp.o: CMakeFiles/vis_app.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/einholz/[Studitum]/WS22|23/AP/Tutorial/Tu5_build_time/Solution/vsapp-solution/src/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/vis_app.dir/vis_app.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/vis_app.dir/vis_app.cpp.o -MF CMakeFiles/vis_app.dir/vis_app.cpp.o.d -o CMakeFiles/vis_app.dir/vis_app.cpp.o -c "/home/einholz/[Studitum]/WS22|23/AP/Tutorial/Tu5_build_time/Solution/vsapp-solution/src/vis_app.cpp"

CMakeFiles/vis_app.dir/vis_app.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vis_app.dir/vis_app.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/einholz/[Studitum]/WS22|23/AP/Tutorial/Tu5_build_time/Solution/vsapp-solution/src/vis_app.cpp" > CMakeFiles/vis_app.dir/vis_app.cpp.i

CMakeFiles/vis_app.dir/vis_app.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vis_app.dir/vis_app.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/einholz/[Studitum]/WS22|23/AP/Tutorial/Tu5_build_time/Solution/vsapp-solution/src/vis_app.cpp" -o CMakeFiles/vis_app.dir/vis_app.cpp.s

CMakeFiles/vis_app.dir/helper.cpp.o: CMakeFiles/vis_app.dir/flags.make
CMakeFiles/vis_app.dir/helper.cpp.o: helper.cpp
CMakeFiles/vis_app.dir/helper.cpp.o: CMakeFiles/vis_app.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/einholz/[Studitum]/WS22|23/AP/Tutorial/Tu5_build_time/Solution/vsapp-solution/src/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/vis_app.dir/helper.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/vis_app.dir/helper.cpp.o -MF CMakeFiles/vis_app.dir/helper.cpp.o.d -o CMakeFiles/vis_app.dir/helper.cpp.o -c "/home/einholz/[Studitum]/WS22|23/AP/Tutorial/Tu5_build_time/Solution/vsapp-solution/src/helper.cpp"

CMakeFiles/vis_app.dir/helper.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vis_app.dir/helper.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/einholz/[Studitum]/WS22|23/AP/Tutorial/Tu5_build_time/Solution/vsapp-solution/src/helper.cpp" > CMakeFiles/vis_app.dir/helper.cpp.i

CMakeFiles/vis_app.dir/helper.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vis_app.dir/helper.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/einholz/[Studitum]/WS22|23/AP/Tutorial/Tu5_build_time/Solution/vsapp-solution/src/helper.cpp" -o CMakeFiles/vis_app.dir/helper.cpp.s

# Object files for target vis_app
vis_app_OBJECTS = \
"CMakeFiles/vis_app.dir/vis_app.cpp.o" \
"CMakeFiles/vis_app.dir/helper.cpp.o"

# External object files for target vis_app
vis_app_EXTERNAL_OBJECTS =

vis_app: CMakeFiles/vis_app.dir/vis_app.cpp.o
vis_app: CMakeFiles/vis_app.dir/helper.cpp.o
vis_app: CMakeFiles/vis_app.dir/build.make
vis_app: CMakeFiles/vis_app.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/einholz/[Studitum]/WS22|23/AP/Tutorial/Tu5_build_time/Solution/vsapp-solution/src/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable vis_app"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vis_app.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/vis_app.dir/build: vis_app
.PHONY : CMakeFiles/vis_app.dir/build

CMakeFiles/vis_app.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/vis_app.dir/cmake_clean.cmake
.PHONY : CMakeFiles/vis_app.dir/clean

CMakeFiles/vis_app.dir/depend:
	cd "/home/einholz/[Studitum]/WS22|23/AP/Tutorial/Tu5_build_time/Solution/vsapp-solution/src" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/einholz/[Studitum]/WS22|23/AP/Tutorial/Tu5_build_time/Solution/vsapp-solution/src" "/home/einholz/[Studitum]/WS22|23/AP/Tutorial/Tu5_build_time/Solution/vsapp-solution/src" "/home/einholz/[Studitum]/WS22|23/AP/Tutorial/Tu5_build_time/Solution/vsapp-solution/src" "/home/einholz/[Studitum]/WS22|23/AP/Tutorial/Tu5_build_time/Solution/vsapp-solution/src" "/home/einholz/[Studitum]/WS22|23/AP/Tutorial/Tu5_build_time/Solution/vsapp-solution/src/CMakeFiles/vis_app.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/vis_app.dir/depend

