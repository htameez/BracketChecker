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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.27.4/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.27.4/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/hamnatameez/assignment-3-do-my-brackets-match-htameez

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/hamnatameez/assignment-3-do-my-brackets-match-htameez/build

# Include any dependencies generated for this target.
include CMakeFiles/tests_stack.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tests_stack.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tests_stack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tests_stack.dir/flags.make

CMakeFiles/tests_stack.dir/test_DSStack_array.cpp.o: CMakeFiles/tests_stack.dir/flags.make
CMakeFiles/tests_stack.dir/test_DSStack_array.cpp.o: /Users/hamnatameez/assignment-3-do-my-brackets-match-htameez/test_DSStack_array.cpp
CMakeFiles/tests_stack.dir/test_DSStack_array.cpp.o: CMakeFiles/tests_stack.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/hamnatameez/assignment-3-do-my-brackets-match-htameez/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tests_stack.dir/test_DSStack_array.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tests_stack.dir/test_DSStack_array.cpp.o -MF CMakeFiles/tests_stack.dir/test_DSStack_array.cpp.o.d -o CMakeFiles/tests_stack.dir/test_DSStack_array.cpp.o -c /Users/hamnatameez/assignment-3-do-my-brackets-match-htameez/test_DSStack_array.cpp

CMakeFiles/tests_stack.dir/test_DSStack_array.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tests_stack.dir/test_DSStack_array.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hamnatameez/assignment-3-do-my-brackets-match-htameez/test_DSStack_array.cpp > CMakeFiles/tests_stack.dir/test_DSStack_array.cpp.i

CMakeFiles/tests_stack.dir/test_DSStack_array.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tests_stack.dir/test_DSStack_array.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hamnatameez/assignment-3-do-my-brackets-match-htameez/test_DSStack_array.cpp -o CMakeFiles/tests_stack.dir/test_DSStack_array.cpp.s

# Object files for target tests_stack
tests_stack_OBJECTS = \
"CMakeFiles/tests_stack.dir/test_DSStack_array.cpp.o"

# External object files for target tests_stack
tests_stack_EXTERNAL_OBJECTS =

tests_stack: CMakeFiles/tests_stack.dir/test_DSStack_array.cpp.o
tests_stack: CMakeFiles/tests_stack.dir/build.make
tests_stack: CMakeFiles/tests_stack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/hamnatameez/assignment-3-do-my-brackets-match-htameez/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tests_stack"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tests_stack.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tests_stack.dir/build: tests_stack
.PHONY : CMakeFiles/tests_stack.dir/build

CMakeFiles/tests_stack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tests_stack.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tests_stack.dir/clean

CMakeFiles/tests_stack.dir/depend:
	cd /Users/hamnatameez/assignment-3-do-my-brackets-match-htameez/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/hamnatameez/assignment-3-do-my-brackets-match-htameez /Users/hamnatameez/assignment-3-do-my-brackets-match-htameez /Users/hamnatameez/assignment-3-do-my-brackets-match-htameez/build /Users/hamnatameez/assignment-3-do-my-brackets-match-htameez/build /Users/hamnatameez/assignment-3-do-my-brackets-match-htameez/build/CMakeFiles/tests_stack.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/tests_stack.dir/depend

