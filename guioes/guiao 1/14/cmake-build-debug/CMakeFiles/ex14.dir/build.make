# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\mtoma\Desktop\CLion Stuff\GitHub\programacao\guioes\guiao 1\14"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\mtoma\Desktop\CLion Stuff\GitHub\programacao\guioes\guiao 1\14\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/ex14.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/ex14.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex14.dir/flags.make

CMakeFiles/ex14.dir/main.c.obj: CMakeFiles/ex14.dir/flags.make
CMakeFiles/ex14.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\mtoma\Desktop\CLion Stuff\GitHub\programacao\guioes\guiao 1\14\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ex14.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ex14.dir\main.c.obj -c "C:\Users\mtoma\Desktop\CLion Stuff\GitHub\programacao\guioes\guiao 1\14\main.c"

CMakeFiles/ex14.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ex14.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\mtoma\Desktop\CLion Stuff\GitHub\programacao\guioes\guiao 1\14\main.c" > CMakeFiles\ex14.dir\main.c.i

CMakeFiles/ex14.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ex14.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\mtoma\Desktop\CLion Stuff\GitHub\programacao\guioes\guiao 1\14\main.c" -o CMakeFiles\ex14.dir\main.c.s

# Object files for target ex14
ex14_OBJECTS = \
"CMakeFiles/ex14.dir/main.c.obj"

# External object files for target ex14
ex14_EXTERNAL_OBJECTS =

ex14.exe: CMakeFiles/ex14.dir/main.c.obj
ex14.exe: CMakeFiles/ex14.dir/build.make
ex14.exe: CMakeFiles/ex14.dir/linklibs.rsp
ex14.exe: CMakeFiles/ex14.dir/objects1.rsp
ex14.exe: CMakeFiles/ex14.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\mtoma\Desktop\CLion Stuff\GitHub\programacao\guioes\guiao 1\14\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ex14.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ex14.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex14.dir/build: ex14.exe
.PHONY : CMakeFiles/ex14.dir/build

CMakeFiles/ex14.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ex14.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ex14.dir/clean

CMakeFiles/ex14.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\mtoma\Desktop\CLion Stuff\GitHub\programacao\guioes\guiao 1\14" "C:\Users\mtoma\Desktop\CLion Stuff\GitHub\programacao\guioes\guiao 1\14" "C:\Users\mtoma\Desktop\CLion Stuff\GitHub\programacao\guioes\guiao 1\14\cmake-build-debug" "C:\Users\mtoma\Desktop\CLion Stuff\GitHub\programacao\guioes\guiao 1\14\cmake-build-debug" "C:\Users\mtoma\Desktop\CLion Stuff\GitHub\programacao\guioes\guiao 1\14\cmake-build-debug\CMakeFiles\ex14.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/ex14.dir/depend

