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
CMAKE_SOURCE_DIR = /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild

# Utility rule file for rapidxml-populate.

# Include the progress variables for this target.
include CMakeFiles/rapidxml-populate.dir/progress.make

CMakeFiles/rapidxml-populate: CMakeFiles/rapidxml-populate-complete


CMakeFiles/rapidxml-populate-complete: rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-install
CMakeFiles/rapidxml-populate-complete: rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-mkdir
CMakeFiles/rapidxml-populate-complete: rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-download
CMakeFiles/rapidxml-populate-complete: rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-update
CMakeFiles/rapidxml-populate-complete: rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-patch
CMakeFiles/rapidxml-populate-complete: rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-configure
CMakeFiles/rapidxml-populate-complete: rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-build
CMakeFiles/rapidxml-populate-complete: rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-install
CMakeFiles/rapidxml-populate-complete: rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-test
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'rapidxml-populate'"
	/usr/bin/cmake -E make_directory /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild/CMakeFiles
	/usr/bin/cmake -E touch /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild/CMakeFiles/rapidxml-populate-complete
	/usr/bin/cmake -E touch /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild/rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-done

rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-install: rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "No install step for 'rapidxml-populate'"
	cd /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-build && /usr/bin/cmake -E echo_append
	cd /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-build && /usr/bin/cmake -E touch /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild/rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-install

rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Creating directories for 'rapidxml-populate'"
	/usr/bin/cmake -E make_directory /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-src
	/usr/bin/cmake -E make_directory /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-build
	/usr/bin/cmake -E make_directory /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild/rapidxml-populate-prefix
	/usr/bin/cmake -E make_directory /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild/rapidxml-populate-prefix/tmp
	/usr/bin/cmake -E make_directory /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild/rapidxml-populate-prefix/src/rapidxml-populate-stamp
	/usr/bin/cmake -E make_directory /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild/rapidxml-populate-prefix/src
	/usr/bin/cmake -E make_directory /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild/rapidxml-populate-prefix/src/rapidxml-populate-stamp
	/usr/bin/cmake -E touch /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild/rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-mkdir

rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-download: rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-gitinfo.txt
rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-download: rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (git clone) for 'rapidxml-populate'"
	cd /home/thomas/Documents/Projects/Integrator/_deps && /usr/bin/cmake -P /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild/rapidxml-populate-prefix/tmp/rapidxml-populate-gitclone.cmake
	cd /home/thomas/Documents/Projects/Integrator/_deps && /usr/bin/cmake -E touch /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild/rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-download

rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-update: rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Performing update step for 'rapidxml-populate'"
	cd /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-src && /usr/bin/cmake -P /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild/rapidxml-populate-prefix/tmp/rapidxml-populate-gitupdate.cmake

rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-patch: rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "No patch step for 'rapidxml-populate'"
	/usr/bin/cmake -E echo_append
	/usr/bin/cmake -E touch /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild/rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-patch

rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-configure: rapidxml-populate-prefix/tmp/rapidxml-populate-cfgcmd.txt
rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-configure: rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-update
rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-configure: rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "No configure step for 'rapidxml-populate'"
	cd /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-build && /usr/bin/cmake -E echo_append
	cd /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-build && /usr/bin/cmake -E touch /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild/rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-configure

rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-build: rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "No build step for 'rapidxml-populate'"
	cd /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-build && /usr/bin/cmake -E echo_append
	cd /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-build && /usr/bin/cmake -E touch /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild/rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-build

rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-test: rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "No test step for 'rapidxml-populate'"
	cd /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-build && /usr/bin/cmake -E echo_append
	cd /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-build && /usr/bin/cmake -E touch /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild/rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-test

rapidxml-populate: CMakeFiles/rapidxml-populate
rapidxml-populate: CMakeFiles/rapidxml-populate-complete
rapidxml-populate: rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-install
rapidxml-populate: rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-mkdir
rapidxml-populate: rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-download
rapidxml-populate: rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-update
rapidxml-populate: rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-patch
rapidxml-populate: rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-configure
rapidxml-populate: rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-build
rapidxml-populate: rapidxml-populate-prefix/src/rapidxml-populate-stamp/rapidxml-populate-test
rapidxml-populate: CMakeFiles/rapidxml-populate.dir/build.make

.PHONY : rapidxml-populate

# Rule to build all files generated by this target.
CMakeFiles/rapidxml-populate.dir/build: rapidxml-populate

.PHONY : CMakeFiles/rapidxml-populate.dir/build

CMakeFiles/rapidxml-populate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rapidxml-populate.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rapidxml-populate.dir/clean

CMakeFiles/rapidxml-populate.dir/depend:
	cd /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild /home/thomas/Documents/Projects/Integrator/_deps/rapidxml-subbuild/CMakeFiles/rapidxml-populate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rapidxml-populate.dir/depend

