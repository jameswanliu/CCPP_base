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
CMAKE_SOURCE_DIR = D:\Users\james\clionworkspace\CCPP_base

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Users\james\clionworkspace\CCPP_base\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/first.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/first.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/first.dir/flags.make

CMakeFiles/first.dir/first.c.obj: CMakeFiles/first.dir/flags.make
CMakeFiles/first.dir/first.c.obj: ../first.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Users\james\clionworkspace\CCPP_base\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/first.dir/first.c.obj"
	"D:\Program Files\JetBrains\mingw64\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\first.dir\first.c.obj   -c D:\Users\james\clionworkspace\CCPP_base\first.c

CMakeFiles/first.dir/first.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/first.dir/first.c.i"
	"D:\Program Files\JetBrains\mingw64\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Users\james\clionworkspace\CCPP_base\first.c > CMakeFiles\first.dir\first.c.i

CMakeFiles/first.dir/first.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/first.dir/first.c.s"
	"D:\Program Files\JetBrains\mingw64\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Users\james\clionworkspace\CCPP_base\first.c -o CMakeFiles\first.dir\first.c.s

# Object files for target first
first_OBJECTS = \
"CMakeFiles/first.dir/first.c.obj"

# External object files for target first
first_EXTERNAL_OBJECTS =

first.exe: CMakeFiles/first.dir/first.c.obj
first.exe: CMakeFiles/first.dir/build.make
first.exe: CMakeFiles/first.dir/linklibs.rsp
first.exe: CMakeFiles/first.dir/objects1.rsp
first.exe: CMakeFiles/first.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Users\james\clionworkspace\CCPP_base\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable first.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\first.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/first.dir/build: first.exe

.PHONY : CMakeFiles/first.dir/build

CMakeFiles/first.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\first.dir\cmake_clean.cmake
.PHONY : CMakeFiles/first.dir/clean

CMakeFiles/first.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Users\james\clionworkspace\CCPP_base D:\Users\james\clionworkspace\CCPP_base D:\Users\james\clionworkspace\CCPP_base\cmake-build-debug D:\Users\james\clionworkspace\CCPP_base\cmake-build-debug D:\Users\james\clionworkspace\CCPP_base\cmake-build-debug\CMakeFiles\first.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/first.dir/depend
