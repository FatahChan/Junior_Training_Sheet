# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.22

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\Tempest\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\221.5080.224\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Tempest\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\221.5080.224\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\CP\Junior_Training_Sheet

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\CP\Junior_Training_Sheet\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/EASYMATH.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/EASYMATH.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/EASYMATH.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EASYMATH.dir/flags.make

CMakeFiles/EASYMATH.dir/Sheet_A/EASYMATH.cpp.obj: CMakeFiles/EASYMATH.dir/flags.make
CMakeFiles/EASYMATH.dir/Sheet_A/EASYMATH.cpp.obj: ../Sheet_A/EASYMATH.cpp
CMakeFiles/EASYMATH.dir/Sheet_A/EASYMATH.cpp.obj: CMakeFiles/EASYMATH.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CP\Junior_Training_Sheet\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/EASYMATH.dir/Sheet_A/EASYMATH.cpp.obj"
	C:\Users\Tempest\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\221.5080.224\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/EASYMATH.dir/Sheet_A/EASYMATH.cpp.obj -MF CMakeFiles\EASYMATH.dir\Sheet_A\EASYMATH.cpp.obj.d -o CMakeFiles\EASYMATH.dir\Sheet_A\EASYMATH.cpp.obj -c D:\CP\Junior_Training_Sheet\Sheet_A\EASYMATH.cpp

CMakeFiles/EASYMATH.dir/Sheet_A/EASYMATH.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EASYMATH.dir/Sheet_A/EASYMATH.cpp.i"
	C:\Users\Tempest\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\221.5080.224\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CP\Junior_Training_Sheet\Sheet_A\EASYMATH.cpp > CMakeFiles\EASYMATH.dir\Sheet_A\EASYMATH.cpp.i

CMakeFiles/EASYMATH.dir/Sheet_A/EASYMATH.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EASYMATH.dir/Sheet_A/EASYMATH.cpp.s"
	C:\Users\Tempest\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\221.5080.224\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\CP\Junior_Training_Sheet\Sheet_A\EASYMATH.cpp -o CMakeFiles\EASYMATH.dir\Sheet_A\EASYMATH.cpp.s

# Object files for target EASYMATH
EASYMATH_OBJECTS = \
"CMakeFiles/EASYMATH.dir/Sheet_A/EASYMATH.cpp.obj"

# External object files for target EASYMATH
EASYMATH_EXTERNAL_OBJECTS =

EASYMATH.exe: CMakeFiles/EASYMATH.dir/Sheet_A/EASYMATH.cpp.obj
EASYMATH.exe: CMakeFiles/EASYMATH.dir/build.make
EASYMATH.exe: CMakeFiles/EASYMATH.dir/linklibs.rsp
EASYMATH.exe: CMakeFiles/EASYMATH.dir/objects1.rsp
EASYMATH.exe: CMakeFiles/EASYMATH.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CP\Junior_Training_Sheet\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable EASYMATH.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\EASYMATH.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EASYMATH.dir/build: EASYMATH.exe
.PHONY : CMakeFiles/EASYMATH.dir/build

CMakeFiles/EASYMATH.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\EASYMATH.dir\cmake_clean.cmake
.PHONY : CMakeFiles/EASYMATH.dir/clean

CMakeFiles/EASYMATH.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CP\Junior_Training_Sheet D:\CP\Junior_Training_Sheet D:\CP\Junior_Training_Sheet\cmake-build-debug D:\CP\Junior_Training_Sheet\cmake-build-debug D:\CP\Junior_Training_Sheet\cmake-build-debug\CMakeFiles\EASYMATH.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/EASYMATH.dir/depend

