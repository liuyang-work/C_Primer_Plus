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
CMAKE_COMMAND = "D:\EXsoftware\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\EXsoftware\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\CProgram\C-Basic-Code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\CProgram\C-Basic-Code\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Example_9_13.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Example_9_13.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Example_9_13.dir/flags.make

CMakeFiles/Example_9_13.dir/C_Primer_Plus/Unit_9/Example_9_13.c.obj: CMakeFiles/Example_9_13.dir/flags.make
CMakeFiles/Example_9_13.dir/C_Primer_Plus/Unit_9/Example_9_13.c.obj: ../C_Primer_Plus/Unit_9/Example_9_13.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CProgram\C-Basic-Code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Example_9_13.dir/C_Primer_Plus/Unit_9/Example_9_13.c.obj"
	D:\EXsoftware\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Example_9_13.dir\C_Primer_Plus\Unit_9\Example_9_13.c.obj   -c D:\CProgram\C-Basic-Code\C_Primer_Plus\Unit_9\Example_9_13.c

CMakeFiles/Example_9_13.dir/C_Primer_Plus/Unit_9/Example_9_13.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Example_9_13.dir/C_Primer_Plus/Unit_9/Example_9_13.c.i"
	D:\EXsoftware\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\CProgram\C-Basic-Code\C_Primer_Plus\Unit_9\Example_9_13.c > CMakeFiles\Example_9_13.dir\C_Primer_Plus\Unit_9\Example_9_13.c.i

CMakeFiles/Example_9_13.dir/C_Primer_Plus/Unit_9/Example_9_13.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Example_9_13.dir/C_Primer_Plus/Unit_9/Example_9_13.c.s"
	D:\EXsoftware\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\CProgram\C-Basic-Code\C_Primer_Plus\Unit_9\Example_9_13.c -o CMakeFiles\Example_9_13.dir\C_Primer_Plus\Unit_9\Example_9_13.c.s

# Object files for target Example_9_13
Example_9_13_OBJECTS = \
"CMakeFiles/Example_9_13.dir/C_Primer_Plus/Unit_9/Example_9_13.c.obj"

# External object files for target Example_9_13
Example_9_13_EXTERNAL_OBJECTS =

Example_9_13.exe: CMakeFiles/Example_9_13.dir/C_Primer_Plus/Unit_9/Example_9_13.c.obj
Example_9_13.exe: CMakeFiles/Example_9_13.dir/build.make
Example_9_13.exe: CMakeFiles/Example_9_13.dir/linklibs.rsp
Example_9_13.exe: CMakeFiles/Example_9_13.dir/objects1.rsp
Example_9_13.exe: CMakeFiles/Example_9_13.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CProgram\C-Basic-Code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Example_9_13.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Example_9_13.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Example_9_13.dir/build: Example_9_13.exe

.PHONY : CMakeFiles/Example_9_13.dir/build

CMakeFiles/Example_9_13.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Example_9_13.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Example_9_13.dir/clean

CMakeFiles/Example_9_13.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CProgram\C-Basic-Code D:\CProgram\C-Basic-Code D:\CProgram\C-Basic-Code\cmake-build-debug D:\CProgram\C-Basic-Code\cmake-build-debug D:\CProgram\C-Basic-Code\cmake-build-debug\CMakeFiles\Example_9_13.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Example_9_13.dir/depend

