# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /app/extra/clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /app/extra/clion/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/wojciech/CLionProjects/Projekt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wojciech/CLionProjects/Projekt/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Projekt.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Projekt.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Projekt.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Projekt.dir/flags.make

CMakeFiles/Projekt.dir/main.cpp.o: CMakeFiles/Projekt.dir/flags.make
CMakeFiles/Projekt.dir/main.cpp.o: ../main.cpp
CMakeFiles/Projekt.dir/main.cpp.o: CMakeFiles/Projekt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wojciech/CLionProjects/Projekt/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Projekt.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Projekt.dir/main.cpp.o -MF CMakeFiles/Projekt.dir/main.cpp.o.d -o CMakeFiles/Projekt.dir/main.cpp.o -c /home/wojciech/CLionProjects/Projekt/main.cpp

CMakeFiles/Projekt.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Projekt.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wojciech/CLionProjects/Projekt/main.cpp > CMakeFiles/Projekt.dir/main.cpp.i

CMakeFiles/Projekt.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Projekt.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wojciech/CLionProjects/Projekt/main.cpp -o CMakeFiles/Projekt.dir/main.cpp.s

CMakeFiles/Projekt.dir/ConnectFour.cpp.o: CMakeFiles/Projekt.dir/flags.make
CMakeFiles/Projekt.dir/ConnectFour.cpp.o: ../ConnectFour.cpp
CMakeFiles/Projekt.dir/ConnectFour.cpp.o: CMakeFiles/Projekt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wojciech/CLionProjects/Projekt/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Projekt.dir/ConnectFour.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Projekt.dir/ConnectFour.cpp.o -MF CMakeFiles/Projekt.dir/ConnectFour.cpp.o.d -o CMakeFiles/Projekt.dir/ConnectFour.cpp.o -c /home/wojciech/CLionProjects/Projekt/ConnectFour.cpp

CMakeFiles/Projekt.dir/ConnectFour.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Projekt.dir/ConnectFour.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wojciech/CLionProjects/Projekt/ConnectFour.cpp > CMakeFiles/Projekt.dir/ConnectFour.cpp.i

CMakeFiles/Projekt.dir/ConnectFour.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Projekt.dir/ConnectFour.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wojciech/CLionProjects/Projekt/ConnectFour.cpp -o CMakeFiles/Projekt.dir/ConnectFour.cpp.s

CMakeFiles/Projekt.dir/AI.cpp.o: CMakeFiles/Projekt.dir/flags.make
CMakeFiles/Projekt.dir/AI.cpp.o: ../AI.cpp
CMakeFiles/Projekt.dir/AI.cpp.o: CMakeFiles/Projekt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wojciech/CLionProjects/Projekt/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Projekt.dir/AI.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Projekt.dir/AI.cpp.o -MF CMakeFiles/Projekt.dir/AI.cpp.o.d -o CMakeFiles/Projekt.dir/AI.cpp.o -c /home/wojciech/CLionProjects/Projekt/AI.cpp

CMakeFiles/Projekt.dir/AI.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Projekt.dir/AI.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wojciech/CLionProjects/Projekt/AI.cpp > CMakeFiles/Projekt.dir/AI.cpp.i

CMakeFiles/Projekt.dir/AI.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Projekt.dir/AI.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wojciech/CLionProjects/Projekt/AI.cpp -o CMakeFiles/Projekt.dir/AI.cpp.s

CMakeFiles/Projekt.dir/Display.cpp.o: CMakeFiles/Projekt.dir/flags.make
CMakeFiles/Projekt.dir/Display.cpp.o: ../Display.cpp
CMakeFiles/Projekt.dir/Display.cpp.o: CMakeFiles/Projekt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wojciech/CLionProjects/Projekt/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Projekt.dir/Display.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Projekt.dir/Display.cpp.o -MF CMakeFiles/Projekt.dir/Display.cpp.o.d -o CMakeFiles/Projekt.dir/Display.cpp.o -c /home/wojciech/CLionProjects/Projekt/Display.cpp

CMakeFiles/Projekt.dir/Display.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Projekt.dir/Display.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wojciech/CLionProjects/Projekt/Display.cpp > CMakeFiles/Projekt.dir/Display.cpp.i

CMakeFiles/Projekt.dir/Display.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Projekt.dir/Display.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wojciech/CLionProjects/Projekt/Display.cpp -o CMakeFiles/Projekt.dir/Display.cpp.s

# Object files for target Projekt
Projekt_OBJECTS = \
"CMakeFiles/Projekt.dir/main.cpp.o" \
"CMakeFiles/Projekt.dir/ConnectFour.cpp.o" \
"CMakeFiles/Projekt.dir/AI.cpp.o" \
"CMakeFiles/Projekt.dir/Display.cpp.o"

# External object files for target Projekt
Projekt_EXTERNAL_OBJECTS =

Projekt: CMakeFiles/Projekt.dir/main.cpp.o
Projekt: CMakeFiles/Projekt.dir/ConnectFour.cpp.o
Projekt: CMakeFiles/Projekt.dir/AI.cpp.o
Projekt: CMakeFiles/Projekt.dir/Display.cpp.o
Projekt: CMakeFiles/Projekt.dir/build.make
Projekt: ../SFML/SFML-2.5.1/lib/libsfml-network.so.2.5.1
Projekt: ../SFML/SFML-2.5.1/lib/libsfml-graphics.so.2.5.1
Projekt: ../SFML/SFML-2.5.1/lib/libsfml-audio.so.2.5.1
Projekt: ../SFML/SFML-2.5.1/lib/libsfml-window.so.2.5.1
Projekt: ../SFML/SFML-2.5.1/lib/libsfml-system.so.2.5.1
Projekt: CMakeFiles/Projekt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wojciech/CLionProjects/Projekt/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable Projekt"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Projekt.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Projekt.dir/build: Projekt
.PHONY : CMakeFiles/Projekt.dir/build

CMakeFiles/Projekt.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Projekt.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Projekt.dir/clean

CMakeFiles/Projekt.dir/depend:
	cd /home/wojciech/CLionProjects/Projekt/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wojciech/CLionProjects/Projekt /home/wojciech/CLionProjects/Projekt /home/wojciech/CLionProjects/Projekt/cmake-build-debug /home/wojciech/CLionProjects/Projekt/cmake-build-debug /home/wojciech/CLionProjects/Projekt/cmake-build-debug/CMakeFiles/Projekt.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Projekt.dir/depend

