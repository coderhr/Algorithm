# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\SoftWare\Clion\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\SoftWare\Clion\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Code\Algorithm\Semaphore

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Code\Algorithm\Semaphore\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Semaphore.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Semaphore.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Semaphore.dir/flags.make

CMakeFiles/Semaphore.dir/main.cpp.obj: CMakeFiles/Semaphore.dir/flags.make
CMakeFiles/Semaphore.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Code\Algorithm\Semaphore\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Semaphore.dir/main.cpp.obj"
	D:\SoftWare\Clion\MinGW\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Semaphore.dir\main.cpp.obj -c D:\Code\Algorithm\Semaphore\main.cpp

CMakeFiles/Semaphore.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Semaphore.dir/main.cpp.i"
	D:\SoftWare\Clion\MinGW\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Code\Algorithm\Semaphore\main.cpp > CMakeFiles\Semaphore.dir\main.cpp.i

CMakeFiles/Semaphore.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Semaphore.dir/main.cpp.s"
	D:\SoftWare\Clion\MinGW\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Code\Algorithm\Semaphore\main.cpp -o CMakeFiles\Semaphore.dir\main.cpp.s

# Object files for target Semaphore
Semaphore_OBJECTS = \
"CMakeFiles/Semaphore.dir/main.cpp.obj"

# External object files for target Semaphore
Semaphore_EXTERNAL_OBJECTS =

Semaphore.exe: CMakeFiles/Semaphore.dir/main.cpp.obj
Semaphore.exe: CMakeFiles/Semaphore.dir/build.make
Semaphore.exe: CMakeFiles/Semaphore.dir/linklibs.rsp
Semaphore.exe: CMakeFiles/Semaphore.dir/objects1.rsp
Semaphore.exe: CMakeFiles/Semaphore.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Code\Algorithm\Semaphore\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Semaphore.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Semaphore.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Semaphore.dir/build: Semaphore.exe

.PHONY : CMakeFiles/Semaphore.dir/build

CMakeFiles/Semaphore.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Semaphore.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Semaphore.dir/clean

CMakeFiles/Semaphore.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Code\Algorithm\Semaphore D:\Code\Algorithm\Semaphore D:\Code\Algorithm\Semaphore\cmake-build-debug D:\Code\Algorithm\Semaphore\cmake-build-debug D:\Code\Algorithm\Semaphore\cmake-build-debug\CMakeFiles\Semaphore.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Semaphore.dir/depend
