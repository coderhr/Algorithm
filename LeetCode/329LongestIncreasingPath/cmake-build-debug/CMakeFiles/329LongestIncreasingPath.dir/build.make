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
CMAKE_SOURCE_DIR = D:\Code\Algorithm\LeetCode\329LongestIncreasingPath

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Code\Algorithm\LeetCode\329LongestIncreasingPath\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/329LongestIncreasingPath.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/329LongestIncreasingPath.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/329LongestIncreasingPath.dir/flags.make

CMakeFiles/329LongestIncreasingPath.dir/main.cpp.obj: CMakeFiles/329LongestIncreasingPath.dir/flags.make
CMakeFiles/329LongestIncreasingPath.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Code\Algorithm\LeetCode\329LongestIncreasingPath\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/329LongestIncreasingPath.dir/main.cpp.obj"
	D:\SoftWare\Clion\MinGW\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\329LongestIncreasingPath.dir\main.cpp.obj -c D:\Code\Algorithm\LeetCode\329LongestIncreasingPath\main.cpp

CMakeFiles/329LongestIncreasingPath.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/329LongestIncreasingPath.dir/main.cpp.i"
	D:\SoftWare\Clion\MinGW\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Code\Algorithm\LeetCode\329LongestIncreasingPath\main.cpp > CMakeFiles\329LongestIncreasingPath.dir\main.cpp.i

CMakeFiles/329LongestIncreasingPath.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/329LongestIncreasingPath.dir/main.cpp.s"
	D:\SoftWare\Clion\MinGW\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Code\Algorithm\LeetCode\329LongestIncreasingPath\main.cpp -o CMakeFiles\329LongestIncreasingPath.dir\main.cpp.s

# Object files for target 329LongestIncreasingPath
329LongestIncreasingPath_OBJECTS = \
"CMakeFiles/329LongestIncreasingPath.dir/main.cpp.obj"

# External object files for target 329LongestIncreasingPath
329LongestIncreasingPath_EXTERNAL_OBJECTS =

329LongestIncreasingPath.exe: CMakeFiles/329LongestIncreasingPath.dir/main.cpp.obj
329LongestIncreasingPath.exe: CMakeFiles/329LongestIncreasingPath.dir/build.make
329LongestIncreasingPath.exe: CMakeFiles/329LongestIncreasingPath.dir/linklibs.rsp
329LongestIncreasingPath.exe: CMakeFiles/329LongestIncreasingPath.dir/objects1.rsp
329LongestIncreasingPath.exe: CMakeFiles/329LongestIncreasingPath.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Code\Algorithm\LeetCode\329LongestIncreasingPath\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 329LongestIncreasingPath.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\329LongestIncreasingPath.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/329LongestIncreasingPath.dir/build: 329LongestIncreasingPath.exe

.PHONY : CMakeFiles/329LongestIncreasingPath.dir/build

CMakeFiles/329LongestIncreasingPath.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\329LongestIncreasingPath.dir\cmake_clean.cmake
.PHONY : CMakeFiles/329LongestIncreasingPath.dir/clean

CMakeFiles/329LongestIncreasingPath.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Code\Algorithm\LeetCode\329LongestIncreasingPath D:\Code\Algorithm\LeetCode\329LongestIncreasingPath D:\Code\Algorithm\LeetCode\329LongestIncreasingPath\cmake-build-debug D:\Code\Algorithm\LeetCode\329LongestIncreasingPath\cmake-build-debug D:\Code\Algorithm\LeetCode\329LongestIncreasingPath\cmake-build-debug\CMakeFiles\329LongestIncreasingPath.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/329LongestIncreasingPath.dir/depend
