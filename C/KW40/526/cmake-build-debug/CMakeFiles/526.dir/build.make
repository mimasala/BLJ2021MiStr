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
CMAKE_SOURCE_DIR = C:\Source\projects-web\BLJ2021-Aufgaben-C\BLJ2021MiStr\C\KW40\526

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Source\projects-web\BLJ2021-Aufgaben-C\BLJ2021MiStr\C\KW40\526\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/526.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/526.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/526.dir/flags.make

CMakeFiles/526.dir/main.c.obj: CMakeFiles/526.dir/flags.make
CMakeFiles/526.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Source\projects-web\BLJ2021-Aufgaben-C\BLJ2021MiStr\C\KW40\526\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/526.dir/main.c.obj"
	C:\MyTools\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\526.dir\main.c.obj -c C:\Source\projects-web\BLJ2021-Aufgaben-C\BLJ2021MiStr\C\KW40\526\main.c

CMakeFiles/526.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/526.dir/main.c.i"
	C:\MyTools\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Source\projects-web\BLJ2021-Aufgaben-C\BLJ2021MiStr\C\KW40\526\main.c > CMakeFiles\526.dir\main.c.i

CMakeFiles/526.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/526.dir/main.c.s"
	C:\MyTools\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Source\projects-web\BLJ2021-Aufgaben-C\BLJ2021MiStr\C\KW40\526\main.c -o CMakeFiles\526.dir\main.c.s

# Object files for target 526
526_OBJECTS = \
"CMakeFiles/526.dir/main.c.obj"

# External object files for target 526
526_EXTERNAL_OBJECTS =

526.exe: CMakeFiles/526.dir/main.c.obj
526.exe: CMakeFiles/526.dir/build.make
526.exe: CMakeFiles/526.dir/linklibs.rsp
526.exe: CMakeFiles/526.dir/objects1.rsp
526.exe: CMakeFiles/526.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Source\projects-web\BLJ2021-Aufgaben-C\BLJ2021MiStr\C\KW40\526\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 526.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\526.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/526.dir/build: 526.exe
.PHONY : CMakeFiles/526.dir/build

CMakeFiles/526.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\526.dir\cmake_clean.cmake
.PHONY : CMakeFiles/526.dir/clean

CMakeFiles/526.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Source\projects-web\BLJ2021-Aufgaben-C\BLJ2021MiStr\C\KW40\526 C:\Source\projects-web\BLJ2021-Aufgaben-C\BLJ2021MiStr\C\KW40\526 C:\Source\projects-web\BLJ2021-Aufgaben-C\BLJ2021MiStr\C\KW40\526\cmake-build-debug C:\Source\projects-web\BLJ2021-Aufgaben-C\BLJ2021MiStr\C\KW40\526\cmake-build-debug C:\Source\projects-web\BLJ2021-Aufgaben-C\BLJ2021MiStr\C\KW40\526\cmake-build-debug\CMakeFiles\526.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/526.dir/depend

