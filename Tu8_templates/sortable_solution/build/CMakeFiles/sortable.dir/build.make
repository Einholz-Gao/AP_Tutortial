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
CMAKE_SOURCE_DIR = /home/einholz/[Studitum]/WS2223/AP/Tutorial/Tu8_templates/sortable_solution

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/einholz/[Studitum]/WS2223/AP/Tutorial/Tu8_templates/sortable_solution/build

# Include any dependencies generated for this target.
include CMakeFiles/sortable.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/sortable.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/sortable.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sortable.dir/flags.make

CMakeFiles/sortable.dir/sortable.cpp.o: CMakeFiles/sortable.dir/flags.make
CMakeFiles/sortable.dir/sortable.cpp.o: /home/einholz/[Studitum]/WS2223/AP/Tutorial/Tu8_templates/sortable_solution/sortable.cpp
CMakeFiles/sortable.dir/sortable.cpp.o: CMakeFiles/sortable.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/einholz/[Studitum]/WS2223/AP/Tutorial/Tu8_templates/sortable_solution/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sortable.dir/sortable.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sortable.dir/sortable.cpp.o -MF CMakeFiles/sortable.dir/sortable.cpp.o.d -o CMakeFiles/sortable.dir/sortable.cpp.o -c /home/einholz/[Studitum]/WS2223/AP/Tutorial/Tu8_templates/sortable_solution/sortable.cpp

CMakeFiles/sortable.dir/sortable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sortable.dir/sortable.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/einholz/[Studitum]/WS2223/AP/Tutorial/Tu8_templates/sortable_solution/sortable.cpp > CMakeFiles/sortable.dir/sortable.cpp.i

CMakeFiles/sortable.dir/sortable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sortable.dir/sortable.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/einholz/[Studitum]/WS2223/AP/Tutorial/Tu8_templates/sortable_solution/sortable.cpp -o CMakeFiles/sortable.dir/sortable.cpp.s

# Object files for target sortable
sortable_OBJECTS = \
"CMakeFiles/sortable.dir/sortable.cpp.o"

# External object files for target sortable
sortable_EXTERNAL_OBJECTS =

sortable: CMakeFiles/sortable.dir/sortable.cpp.o
sortable: CMakeFiles/sortable.dir/build.make
sortable: CMakeFiles/sortable.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/einholz/[Studitum]/WS2223/AP/Tutorial/Tu8_templates/sortable_solution/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sortable"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sortable.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sortable.dir/build: sortable
.PHONY : CMakeFiles/sortable.dir/build

CMakeFiles/sortable.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sortable.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sortable.dir/clean

CMakeFiles/sortable.dir/depend:
	cd /home/einholz/[Studitum]/WS2223/AP/Tutorial/Tu8_templates/sortable_solution/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/einholz/[Studitum]/WS2223/AP/Tutorial/Tu8_templates/sortable_solution /home/einholz/[Studitum]/WS2223/AP/Tutorial/Tu8_templates/sortable_solution /home/einholz/[Studitum]/WS2223/AP/Tutorial/Tu8_templates/sortable_solution/build /home/einholz/[Studitum]/WS2223/AP/Tutorial/Tu8_templates/sortable_solution/build /home/einholz/[Studitum]/WS2223/AP/Tutorial/Tu8_templates/sortable_solution/build/CMakeFiles/sortable.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sortable.dir/depend

