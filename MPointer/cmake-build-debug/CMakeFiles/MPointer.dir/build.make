# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /app/extra/clion/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /app/extra/clion/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/skg/Documents/GitHub/CE2103-P1-MPointer/MPointer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/skg/Documents/GitHub/CE2103-P1-MPointer/MPointer/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MPointer.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MPointer.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MPointer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MPointer.dir/flags.make

CMakeFiles/MPointer.dir/MPointerGC.cpp.o: CMakeFiles/MPointer.dir/flags.make
CMakeFiles/MPointer.dir/MPointerGC.cpp.o: /home/skg/Documents/GitHub/CE2103-P1-MPointer/MPointer/MPointerGC.cpp
CMakeFiles/MPointer.dir/MPointerGC.cpp.o: CMakeFiles/MPointer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/skg/Documents/GitHub/CE2103-P1-MPointer/MPointer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MPointer.dir/MPointerGC.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MPointer.dir/MPointerGC.cpp.o -MF CMakeFiles/MPointer.dir/MPointerGC.cpp.o.d -o CMakeFiles/MPointer.dir/MPointerGC.cpp.o -c /home/skg/Documents/GitHub/CE2103-P1-MPointer/MPointer/MPointerGC.cpp

CMakeFiles/MPointer.dir/MPointerGC.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/MPointer.dir/MPointerGC.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/skg/Documents/GitHub/CE2103-P1-MPointer/MPointer/MPointerGC.cpp > CMakeFiles/MPointer.dir/MPointerGC.cpp.i

CMakeFiles/MPointer.dir/MPointerGC.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/MPointer.dir/MPointerGC.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/skg/Documents/GitHub/CE2103-P1-MPointer/MPointer/MPointerGC.cpp -o CMakeFiles/MPointer.dir/MPointerGC.cpp.s

CMakeFiles/MPointer.dir/DataStructures/Node.cpp.o: CMakeFiles/MPointer.dir/flags.make
CMakeFiles/MPointer.dir/DataStructures/Node.cpp.o: /home/skg/Documents/GitHub/CE2103-P1-MPointer/MPointer/DataStructures/Node.cpp
CMakeFiles/MPointer.dir/DataStructures/Node.cpp.o: CMakeFiles/MPointer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/skg/Documents/GitHub/CE2103-P1-MPointer/MPointer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MPointer.dir/DataStructures/Node.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MPointer.dir/DataStructures/Node.cpp.o -MF CMakeFiles/MPointer.dir/DataStructures/Node.cpp.o.d -o CMakeFiles/MPointer.dir/DataStructures/Node.cpp.o -c /home/skg/Documents/GitHub/CE2103-P1-MPointer/MPointer/DataStructures/Node.cpp

CMakeFiles/MPointer.dir/DataStructures/Node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/MPointer.dir/DataStructures/Node.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/skg/Documents/GitHub/CE2103-P1-MPointer/MPointer/DataStructures/Node.cpp > CMakeFiles/MPointer.dir/DataStructures/Node.cpp.i

CMakeFiles/MPointer.dir/DataStructures/Node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/MPointer.dir/DataStructures/Node.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/skg/Documents/GitHub/CE2103-P1-MPointer/MPointer/DataStructures/Node.cpp -o CMakeFiles/MPointer.dir/DataStructures/Node.cpp.s

CMakeFiles/MPointer.dir/DataStructures/LinkedList.cpp.o: CMakeFiles/MPointer.dir/flags.make
CMakeFiles/MPointer.dir/DataStructures/LinkedList.cpp.o: /home/skg/Documents/GitHub/CE2103-P1-MPointer/MPointer/DataStructures/LinkedList.cpp
CMakeFiles/MPointer.dir/DataStructures/LinkedList.cpp.o: CMakeFiles/MPointer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/skg/Documents/GitHub/CE2103-P1-MPointer/MPointer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/MPointer.dir/DataStructures/LinkedList.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MPointer.dir/DataStructures/LinkedList.cpp.o -MF CMakeFiles/MPointer.dir/DataStructures/LinkedList.cpp.o.d -o CMakeFiles/MPointer.dir/DataStructures/LinkedList.cpp.o -c /home/skg/Documents/GitHub/CE2103-P1-MPointer/MPointer/DataStructures/LinkedList.cpp

CMakeFiles/MPointer.dir/DataStructures/LinkedList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/MPointer.dir/DataStructures/LinkedList.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/skg/Documents/GitHub/CE2103-P1-MPointer/MPointer/DataStructures/LinkedList.cpp > CMakeFiles/MPointer.dir/DataStructures/LinkedList.cpp.i

CMakeFiles/MPointer.dir/DataStructures/LinkedList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/MPointer.dir/DataStructures/LinkedList.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/skg/Documents/GitHub/CE2103-P1-MPointer/MPointer/DataStructures/LinkedList.cpp -o CMakeFiles/MPointer.dir/DataStructures/LinkedList.cpp.s

# Object files for target MPointer
MPointer_OBJECTS = \
"CMakeFiles/MPointer.dir/MPointerGC.cpp.o" \
"CMakeFiles/MPointer.dir/DataStructures/Node.cpp.o" \
"CMakeFiles/MPointer.dir/DataStructures/LinkedList.cpp.o"

# External object files for target MPointer
MPointer_EXTERNAL_OBJECTS =

libMPointer.a: CMakeFiles/MPointer.dir/MPointerGC.cpp.o
libMPointer.a: CMakeFiles/MPointer.dir/DataStructures/Node.cpp.o
libMPointer.a: CMakeFiles/MPointer.dir/DataStructures/LinkedList.cpp.o
libMPointer.a: CMakeFiles/MPointer.dir/build.make
libMPointer.a: CMakeFiles/MPointer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/skg/Documents/GitHub/CE2103-P1-MPointer/MPointer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libMPointer.a"
	$(CMAKE_COMMAND) -P CMakeFiles/MPointer.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MPointer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MPointer.dir/build: libMPointer.a
.PHONY : CMakeFiles/MPointer.dir/build

CMakeFiles/MPointer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MPointer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MPointer.dir/clean

CMakeFiles/MPointer.dir/depend:
	cd /home/skg/Documents/GitHub/CE2103-P1-MPointer/MPointer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/skg/Documents/GitHub/CE2103-P1-MPointer/MPointer /home/skg/Documents/GitHub/CE2103-P1-MPointer/MPointer /home/skg/Documents/GitHub/CE2103-P1-MPointer/MPointer/cmake-build-debug /home/skg/Documents/GitHub/CE2103-P1-MPointer/MPointer/cmake-build-debug /home/skg/Documents/GitHub/CE2103-P1-MPointer/MPointer/cmake-build-debug/CMakeFiles/MPointer.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/MPointer.dir/depend

