# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/qasim/OneDrive/university/semester-4/Data-structure and algorithm/Searching Algorithms/LinearSearch"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/qasim/OneDrive/university/semester-4/Data-structure and algorithm/Searching Algorithms/LinearSearch/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/LinearSearch.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LinearSearch.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LinearSearch.dir/flags.make

CMakeFiles/LinearSearch.dir/main.cpp.o: CMakeFiles/LinearSearch.dir/flags.make
CMakeFiles/LinearSearch.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/qasim/OneDrive/university/semester-4/Data-structure and algorithm/Searching Algorithms/LinearSearch/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LinearSearch.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LinearSearch.dir/main.cpp.o -c "/Users/qasim/OneDrive/university/semester-4/Data-structure and algorithm/Searching Algorithms/LinearSearch/main.cpp"

CMakeFiles/LinearSearch.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LinearSearch.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/qasim/OneDrive/university/semester-4/Data-structure and algorithm/Searching Algorithms/LinearSearch/main.cpp" > CMakeFiles/LinearSearch.dir/main.cpp.i

CMakeFiles/LinearSearch.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LinearSearch.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/qasim/OneDrive/university/semester-4/Data-structure and algorithm/Searching Algorithms/LinearSearch/main.cpp" -o CMakeFiles/LinearSearch.dir/main.cpp.s

CMakeFiles/LinearSearch.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/LinearSearch.dir/main.cpp.o.requires

CMakeFiles/LinearSearch.dir/main.cpp.o.provides: CMakeFiles/LinearSearch.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/LinearSearch.dir/build.make CMakeFiles/LinearSearch.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/LinearSearch.dir/main.cpp.o.provides

CMakeFiles/LinearSearch.dir/main.cpp.o.provides.build: CMakeFiles/LinearSearch.dir/main.cpp.o


# Object files for target LinearSearch
LinearSearch_OBJECTS = \
"CMakeFiles/LinearSearch.dir/main.cpp.o"

# External object files for target LinearSearch
LinearSearch_EXTERNAL_OBJECTS =

LinearSearch: CMakeFiles/LinearSearch.dir/main.cpp.o
LinearSearch: CMakeFiles/LinearSearch.dir/build.make
LinearSearch: CMakeFiles/LinearSearch.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/qasim/OneDrive/university/semester-4/Data-structure and algorithm/Searching Algorithms/LinearSearch/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable LinearSearch"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LinearSearch.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LinearSearch.dir/build: LinearSearch

.PHONY : CMakeFiles/LinearSearch.dir/build

CMakeFiles/LinearSearch.dir/requires: CMakeFiles/LinearSearch.dir/main.cpp.o.requires

.PHONY : CMakeFiles/LinearSearch.dir/requires

CMakeFiles/LinearSearch.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LinearSearch.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LinearSearch.dir/clean

CMakeFiles/LinearSearch.dir/depend:
	cd "/Users/qasim/OneDrive/university/semester-4/Data-structure and algorithm/Searching Algorithms/LinearSearch/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/qasim/OneDrive/university/semester-4/Data-structure and algorithm/Searching Algorithms/LinearSearch" "/Users/qasim/OneDrive/university/semester-4/Data-structure and algorithm/Searching Algorithms/LinearSearch" "/Users/qasim/OneDrive/university/semester-4/Data-structure and algorithm/Searching Algorithms/LinearSearch/cmake-build-debug" "/Users/qasim/OneDrive/university/semester-4/Data-structure and algorithm/Searching Algorithms/LinearSearch/cmake-build-debug" "/Users/qasim/OneDrive/university/semester-4/Data-structure and algorithm/Searching Algorithms/LinearSearch/cmake-build-debug/CMakeFiles/LinearSearch.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/LinearSearch.dir/depend

