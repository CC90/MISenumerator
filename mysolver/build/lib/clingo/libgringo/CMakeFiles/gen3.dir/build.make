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

# Utility rule file for gen3.

# Include any custom commands dependencies for this target.
include lib/clingo/libgringo/CMakeFiles/gen3.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/clingo/libgringo/CMakeFiles/gen3.dir/progress.make

lib/clingo/libgringo/CMakeFiles/gen3: lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc

lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc: /Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "[BISON][nongroundgrammar] Building parser with bison 3.8.2"
	cd /Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo && /opt/local/bin/bison -d -o /Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc /Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy

lib/clingo/libgringo/src/input/nongroundgrammar/grammar.hh: lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc
	@$(CMAKE_COMMAND) -E touch_nocreate lib/clingo/libgringo/src/input/nongroundgrammar/grammar.hh

gen3: lib/clingo/libgringo/CMakeFiles/gen3
gen3: lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc
gen3: lib/clingo/libgringo/src/input/nongroundgrammar/grammar.hh
gen3: lib/clingo/libgringo/CMakeFiles/gen3.dir/build.make
.PHONY : gen3

# Rule to build all files generated by this target.
lib/clingo/libgringo/CMakeFiles/gen3.dir/build: gen3
.PHONY : lib/clingo/libgringo/CMakeFiles/gen3.dir/build

lib/clingo/libgringo/CMakeFiles/gen3.dir/clean:
	cd /Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo && $(CMAKE_COMMAND) -P CMakeFiles/gen3.dir/cmake_clean.cmake
.PHONY : lib/clingo/libgringo/CMakeFiles/gen3.dir/clean

lib/clingo/libgringo/CMakeFiles/gen3.dir/depend:
	cd /Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master /Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo /Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build /Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo /Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/CMakeFiles/gen3.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : lib/clingo/libgringo/CMakeFiles/gen3.dir/depend
