# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Users\kevin\cworkspace\c_cpp_base\CCPP_base

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Users\kevin\cworkspace\c_cpp_base\CCPP_base\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/structlearning.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/structlearning.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/structlearning.dir/flags.make

CMakeFiles/structlearning.dir/structlearning.c.obj: CMakeFiles/structlearning.dir/flags.make
CMakeFiles/structlearning.dir/structlearning.c.obj: ../structlearning.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Users\kevin\cworkspace\c_cpp_base\CCPP_base\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/structlearning.dir/structlearning.c.obj"
	"D:\Program Files\JetBrains\mingw64\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\structlearning.dir\structlearning.c.obj   -c D:\Users\kevin\cworkspace\c_cpp_base\CCPP_base\structlearning.c

CMakeFiles/structlearning.dir/structlearning.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/structlearning.dir/structlearning.c.i"
	"D:\Program Files\JetBrains\mingw64\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Users\kevin\cworkspace\c_cpp_base\CCPP_base\structlearning.c > CMakeFiles\structlearning.dir\structlearning.c.i

CMakeFiles/structlearning.dir/structlearning.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/structlearning.dir/structlearning.c.s"
	"D:\Program Files\JetBrains\mingw64\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Users\kevin\cworkspace\c_cpp_base\CCPP_base\structlearning.c -o CMakeFiles\structlearning.dir\structlearning.c.s

# Object files for target structlearning
structlearning_OBJECTS = \
"CMakeFiles/structlearning.dir/structlearning.c.obj"

# External object files for target structlearning
structlearning_EXTERNAL_OBJECTS =

structlearning.exe: CMakeFiles/structlearning.dir/structlearning.c.obj
structlearning.exe: CMakeFiles/structlearning.dir/build.make
structlearning.exe: CMakeFiles/structlearning.dir/linklibs.rsp
structlearning.exe: CMakeFiles/structlearning.dir/objects1.rsp
structlearning.exe: CMakeFiles/structlearning.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Users\kevin\cworkspace\c_cpp_base\CCPP_base\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable structlearning.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\structlearning.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/structlearning.dir/build: structlearning.exe

.PHONY : CMakeFiles/structlearning.dir/build

CMakeFiles/structlearning.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\structlearning.dir\cmake_clean.cmake
.PHONY : CMakeFiles/structlearning.dir/clean

CMakeFiles/structlearning.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Users\kevin\cworkspace\c_cpp_base\CCPP_base D:\Users\kevin\cworkspace\c_cpp_base\CCPP_base D:\Users\kevin\cworkspace\c_cpp_base\CCPP_base\cmake-build-debug D:\Users\kevin\cworkspace\c_cpp_base\CCPP_base\cmake-build-debug D:\Users\kevin\cworkspace\c_cpp_base\CCPP_base\cmake-build-debug\CMakeFiles\structlearning.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/structlearning.dir/depend

