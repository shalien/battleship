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
CMAKE_COMMAND = /usr/local/lib/python3.8/dist-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /usr/local/lib/python3.8/dist-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/Ophelien/CLionProjects/battleship

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/Ophelien/CLionProjects/battleship/cmake-build-debug

# Include any dependencies generated for this target.
include src/battleship_rudder/CMakeFiles/battleship_rudder.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/battleship_rudder/CMakeFiles/battleship_rudder.dir/compiler_depend.make

# Include the progress variables for this target.
include src/battleship_rudder/CMakeFiles/battleship_rudder.dir/progress.make

# Include the compile flags for this target's objects.
include src/battleship_rudder/CMakeFiles/battleship_rudder.dir/flags.make

src/battleship_rudder/CMakeFiles/battleship_rudder.dir/main.c.o: src/battleship_rudder/CMakeFiles/battleship_rudder.dir/flags.make
src/battleship_rudder/CMakeFiles/battleship_rudder.dir/main.c.o: /mnt/c/Users/Ophelien/CLionProjects/battleship/src/battleship_rudder/main.c
src/battleship_rudder/CMakeFiles/battleship_rudder.dir/main.c.o: src/battleship_rudder/CMakeFiles/battleship_rudder.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/Ophelien/CLionProjects/battleship/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/battleship_rudder/CMakeFiles/battleship_rudder.dir/main.c.o"
	cd /mnt/c/Users/Ophelien/CLionProjects/battleship/cmake-build-debug/src/battleship_rudder && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/battleship_rudder/CMakeFiles/battleship_rudder.dir/main.c.o -MF CMakeFiles/battleship_rudder.dir/main.c.o.d -o CMakeFiles/battleship_rudder.dir/main.c.o -c /mnt/c/Users/Ophelien/CLionProjects/battleship/src/battleship_rudder/main.c

src/battleship_rudder/CMakeFiles/battleship_rudder.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/battleship_rudder.dir/main.c.i"
	cd /mnt/c/Users/Ophelien/CLionProjects/battleship/cmake-build-debug/src/battleship_rudder && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Users/Ophelien/CLionProjects/battleship/src/battleship_rudder/main.c > CMakeFiles/battleship_rudder.dir/main.c.i

src/battleship_rudder/CMakeFiles/battleship_rudder.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/battleship_rudder.dir/main.c.s"
	cd /mnt/c/Users/Ophelien/CLionProjects/battleship/cmake-build-debug/src/battleship_rudder && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Users/Ophelien/CLionProjects/battleship/src/battleship_rudder/main.c -o CMakeFiles/battleship_rudder.dir/main.c.s

src/battleship_rudder/CMakeFiles/battleship_rudder.dir/window.c.o: src/battleship_rudder/CMakeFiles/battleship_rudder.dir/flags.make
src/battleship_rudder/CMakeFiles/battleship_rudder.dir/window.c.o: /mnt/c/Users/Ophelien/CLionProjects/battleship/src/battleship_rudder/window.c
src/battleship_rudder/CMakeFiles/battleship_rudder.dir/window.c.o: src/battleship_rudder/CMakeFiles/battleship_rudder.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/Ophelien/CLionProjects/battleship/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object src/battleship_rudder/CMakeFiles/battleship_rudder.dir/window.c.o"
	cd /mnt/c/Users/Ophelien/CLionProjects/battleship/cmake-build-debug/src/battleship_rudder && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/battleship_rudder/CMakeFiles/battleship_rudder.dir/window.c.o -MF CMakeFiles/battleship_rudder.dir/window.c.o.d -o CMakeFiles/battleship_rudder.dir/window.c.o -c /mnt/c/Users/Ophelien/CLionProjects/battleship/src/battleship_rudder/window.c

src/battleship_rudder/CMakeFiles/battleship_rudder.dir/window.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/battleship_rudder.dir/window.c.i"
	cd /mnt/c/Users/Ophelien/CLionProjects/battleship/cmake-build-debug/src/battleship_rudder && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Users/Ophelien/CLionProjects/battleship/src/battleship_rudder/window.c > CMakeFiles/battleship_rudder.dir/window.c.i

src/battleship_rudder/CMakeFiles/battleship_rudder.dir/window.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/battleship_rudder.dir/window.c.s"
	cd /mnt/c/Users/Ophelien/CLionProjects/battleship/cmake-build-debug/src/battleship_rudder && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Users/Ophelien/CLionProjects/battleship/src/battleship_rudder/window.c -o CMakeFiles/battleship_rudder.dir/window.c.s

# Object files for target battleship_rudder
battleship_rudder_OBJECTS = \
"CMakeFiles/battleship_rudder.dir/main.c.o" \
"CMakeFiles/battleship_rudder.dir/window.c.o"

# External object files for target battleship_rudder
battleship_rudder_EXTERNAL_OBJECTS =

src/battleship_rudder/battleship_rudder: src/battleship_rudder/CMakeFiles/battleship_rudder.dir/main.c.o
src/battleship_rudder/battleship_rudder: src/battleship_rudder/CMakeFiles/battleship_rudder.dir/window.c.o
src/battleship_rudder/battleship_rudder: src/battleship_rudder/CMakeFiles/battleship_rudder.dir/build.make
src/battleship_rudder/battleship_rudder: src/battleship_hull/libbattleship_hull.a
src/battleship_rudder/battleship_rudder: /usr/lib/x86_64-linux-gnu/libcurses.so
src/battleship_rudder/battleship_rudder: /usr/lib/x86_64-linux-gnu/libform.so
src/battleship_rudder/battleship_rudder: src/battleship_rudder/CMakeFiles/battleship_rudder.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/Ophelien/CLionProjects/battleship/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable battleship_rudder"
	cd /mnt/c/Users/Ophelien/CLionProjects/battleship/cmake-build-debug/src/battleship_rudder && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/battleship_rudder.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/battleship_rudder/CMakeFiles/battleship_rudder.dir/build: src/battleship_rudder/battleship_rudder
.PHONY : src/battleship_rudder/CMakeFiles/battleship_rudder.dir/build

src/battleship_rudder/CMakeFiles/battleship_rudder.dir/clean:
	cd /mnt/c/Users/Ophelien/CLionProjects/battleship/cmake-build-debug/src/battleship_rudder && $(CMAKE_COMMAND) -P CMakeFiles/battleship_rudder.dir/cmake_clean.cmake
.PHONY : src/battleship_rudder/CMakeFiles/battleship_rudder.dir/clean

src/battleship_rudder/CMakeFiles/battleship_rudder.dir/depend:
	cd /mnt/c/Users/Ophelien/CLionProjects/battleship/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/Ophelien/CLionProjects/battleship /mnt/c/Users/Ophelien/CLionProjects/battleship/src/battleship_rudder /mnt/c/Users/Ophelien/CLionProjects/battleship/cmake-build-debug /mnt/c/Users/Ophelien/CLionProjects/battleship/cmake-build-debug/src/battleship_rudder /mnt/c/Users/Ophelien/CLionProjects/battleship/cmake-build-debug/src/battleship_rudder/CMakeFiles/battleship_rudder.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/battleship_rudder/CMakeFiles/battleship_rudder.dir/depend

