# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/thomas/Documents/Projects/Integrator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/thomas/Documents/Projects/Integrator/build

# Include any dependencies generated for this target.
include CMakeFiles/integrator.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/integrator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/integrator.dir/flags.make

CMakeFiles/integrator.dir/src/main.cpp.o: CMakeFiles/integrator.dir/flags.make
CMakeFiles/integrator.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/thomas/Documents/Projects/Integrator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/integrator.dir/src/main.cpp.o"
	/usr/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/integrator.dir/src/main.cpp.o -c /home/thomas/Documents/Projects/Integrator/src/main.cpp

CMakeFiles/integrator.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/integrator.dir/src/main.cpp.i"
	/usr/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/thomas/Documents/Projects/Integrator/src/main.cpp > CMakeFiles/integrator.dir/src/main.cpp.i

CMakeFiles/integrator.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/integrator.dir/src/main.cpp.s"
	/usr/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/thomas/Documents/Projects/Integrator/src/main.cpp -o CMakeFiles/integrator.dir/src/main.cpp.s

CMakeFiles/integrator.dir/src/equation_node.cpp.o: CMakeFiles/integrator.dir/flags.make
CMakeFiles/integrator.dir/src/equation_node.cpp.o: ../src/equation_node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/thomas/Documents/Projects/Integrator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/integrator.dir/src/equation_node.cpp.o"
	/usr/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/integrator.dir/src/equation_node.cpp.o -c /home/thomas/Documents/Projects/Integrator/src/equation_node.cpp

CMakeFiles/integrator.dir/src/equation_node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/integrator.dir/src/equation_node.cpp.i"
	/usr/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/thomas/Documents/Projects/Integrator/src/equation_node.cpp > CMakeFiles/integrator.dir/src/equation_node.cpp.i

CMakeFiles/integrator.dir/src/equation_node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/integrator.dir/src/equation_node.cpp.s"
	/usr/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/thomas/Documents/Projects/Integrator/src/equation_node.cpp -o CMakeFiles/integrator.dir/src/equation_node.cpp.s

CMakeFiles/integrator.dir/src/equation.cpp.o: CMakeFiles/integrator.dir/flags.make
CMakeFiles/integrator.dir/src/equation.cpp.o: ../src/equation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/thomas/Documents/Projects/Integrator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/integrator.dir/src/equation.cpp.o"
	/usr/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/integrator.dir/src/equation.cpp.o -c /home/thomas/Documents/Projects/Integrator/src/equation.cpp

CMakeFiles/integrator.dir/src/equation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/integrator.dir/src/equation.cpp.i"
	/usr/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/thomas/Documents/Projects/Integrator/src/equation.cpp > CMakeFiles/integrator.dir/src/equation.cpp.i

CMakeFiles/integrator.dir/src/equation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/integrator.dir/src/equation.cpp.s"
	/usr/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/thomas/Documents/Projects/Integrator/src/equation.cpp -o CMakeFiles/integrator.dir/src/equation.cpp.s

CMakeFiles/integrator.dir/src/workspace.cpp.o: CMakeFiles/integrator.dir/flags.make
CMakeFiles/integrator.dir/src/workspace.cpp.o: ../src/workspace.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/thomas/Documents/Projects/Integrator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/integrator.dir/src/workspace.cpp.o"
	/usr/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/integrator.dir/src/workspace.cpp.o -c /home/thomas/Documents/Projects/Integrator/src/workspace.cpp

CMakeFiles/integrator.dir/src/workspace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/integrator.dir/src/workspace.cpp.i"
	/usr/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/thomas/Documents/Projects/Integrator/src/workspace.cpp > CMakeFiles/integrator.dir/src/workspace.cpp.i

CMakeFiles/integrator.dir/src/workspace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/integrator.dir/src/workspace.cpp.s"
	/usr/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/thomas/Documents/Projects/Integrator/src/workspace.cpp -o CMakeFiles/integrator.dir/src/workspace.cpp.s

CMakeFiles/integrator.dir/src/xmlparser.cpp.o: CMakeFiles/integrator.dir/flags.make
CMakeFiles/integrator.dir/src/xmlparser.cpp.o: ../src/xmlparser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/thomas/Documents/Projects/Integrator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/integrator.dir/src/xmlparser.cpp.o"
	/usr/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/integrator.dir/src/xmlparser.cpp.o -c /home/thomas/Documents/Projects/Integrator/src/xmlparser.cpp

CMakeFiles/integrator.dir/src/xmlparser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/integrator.dir/src/xmlparser.cpp.i"
	/usr/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/thomas/Documents/Projects/Integrator/src/xmlparser.cpp > CMakeFiles/integrator.dir/src/xmlparser.cpp.i

CMakeFiles/integrator.dir/src/xmlparser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/integrator.dir/src/xmlparser.cpp.s"
	/usr/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/thomas/Documents/Projects/Integrator/src/xmlparser.cpp -o CMakeFiles/integrator.dir/src/xmlparser.cpp.s

# Object files for target integrator
integrator_OBJECTS = \
"CMakeFiles/integrator.dir/src/main.cpp.o" \
"CMakeFiles/integrator.dir/src/equation_node.cpp.o" \
"CMakeFiles/integrator.dir/src/equation.cpp.o" \
"CMakeFiles/integrator.dir/src/workspace.cpp.o" \
"CMakeFiles/integrator.dir/src/xmlparser.cpp.o"

# External object files for target integrator
integrator_EXTERNAL_OBJECTS =

integrator: CMakeFiles/integrator.dir/src/main.cpp.o
integrator: CMakeFiles/integrator.dir/src/equation_node.cpp.o
integrator: CMakeFiles/integrator.dir/src/equation.cpp.o
integrator: CMakeFiles/integrator.dir/src/workspace.cpp.o
integrator: CMakeFiles/integrator.dir/src/xmlparser.cpp.o
integrator: CMakeFiles/integrator.dir/build.make
integrator: CMakeFiles/integrator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/thomas/Documents/Projects/Integrator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable integrator"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/integrator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/integrator.dir/build: integrator

.PHONY : CMakeFiles/integrator.dir/build

CMakeFiles/integrator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/integrator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/integrator.dir/clean

CMakeFiles/integrator.dir/depend:
	cd /home/thomas/Documents/Projects/Integrator/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/thomas/Documents/Projects/Integrator /home/thomas/Documents/Projects/Integrator /home/thomas/Documents/Projects/Integrator/build /home/thomas/Documents/Projects/Integrator/build /home/thomas/Documents/Projects/Integrator/build/CMakeFiles/integrator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/integrator.dir/depend

