# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.27.6/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.27.6/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build

# Include any dependencies generated for this target.
include lib/clingo/libreify/CMakeFiles/libreify.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/clingo/libreify/CMakeFiles/libreify.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/clingo/libreify/CMakeFiles/libreify.dir/progress.make

# Include the compile flags for this target's objects.
include lib/clingo/libreify/CMakeFiles/libreify.dir/flags.make

lib/clingo/libreify/CMakeFiles/libreify.dir/src/program.cc.o: lib/clingo/libreify/CMakeFiles/libreify.dir/flags.make
lib/clingo/libreify/CMakeFiles/libreify.dir/src/program.cc.o: /Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libreify/src/program.cc
lib/clingo/libreify/CMakeFiles/libreify.dir/src/program.cc.o: lib/clingo/libreify/CMakeFiles/libreify.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/clingo/libreify/CMakeFiles/libreify.dir/src/program.cc.o"
	cd /Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libreify && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/clingo/libreify/CMakeFiles/libreify.dir/src/program.cc.o -MF CMakeFiles/libreify.dir/src/program.cc.o.d -o CMakeFiles/libreify.dir/src/program.cc.o -c /Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libreify/src/program.cc

lib/clingo/libreify/CMakeFiles/libreify.dir/src/program.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/libreify.dir/src/program.cc.i"
	cd /Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libreify && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libreify/src/program.cc > CMakeFiles/libreify.dir/src/program.cc.i

lib/clingo/libreify/CMakeFiles/libreify.dir/src/program.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/libreify.dir/src/program.cc.s"
	cd /Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libreify && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libreify/src/program.cc -o CMakeFiles/libreify.dir/src/program.cc.s

# Object files for target libreify
libreify_OBJECTS = \
"CMakeFiles/libreify.dir/src/program.cc.o"

# External object files for target libreify
libreify_EXTERNAL_OBJECTS =

lib/libreify.a: lib/clingo/libreify/CMakeFiles/libreify.dir/src/program.cc.o
lib/libreify.a: lib/clingo/libreify/CMakeFiles/libreify.dir/build.make
lib/libreify.a: lib/clingo/libreify/CMakeFiles/libreify.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../libreify.a"
	cd /Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libreify && $(CMAKE_COMMAND) -P CMakeFiles/libreify.dir/cmake_clean_target.cmake
	cd /Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libreify && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/libreify.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/clingo/libreify/CMakeFiles/libreify.dir/build: lib/libreify.a
.PHONY : lib/clingo/libreify/CMakeFiles/libreify.dir/build

lib/clingo/libreify/CMakeFiles/libreify.dir/clean:
	cd /Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libreify && $(CMAKE_COMMAND) -P CMakeFiles/libreify.dir/cmake_clean.cmake
.PHONY : lib/clingo/libreify/CMakeFiles/libreify.dir/clean

lib/clingo/libreify/CMakeFiles/libreify.dir/depend:
	cd /Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master /Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libreify /Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build /Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libreify /Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libreify/CMakeFiles/libreify.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : lib/clingo/libreify/CMakeFiles/libreify.dir/depend

