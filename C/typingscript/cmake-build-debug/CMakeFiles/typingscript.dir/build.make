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
CMAKE_SOURCE_DIR = C:\Source\projects-web\BLJ2021-Aufgaben-C\BLJ2021MiStr\C\typingscript

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Source\projects-web\BLJ2021-Aufgaben-C\BLJ2021MiStr\C\typingscript\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/typingscript.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/typingscript.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/typingscript.dir/flags.make

CMakeFiles/typingscript.dir/main.c.obj: CMakeFiles/typingscript.dir/flags.make
CMakeFiles/typingscript.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Source\projects-web\BLJ2021-Aufgaben-C\BLJ2021MiStr\C\typingscript\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/typingscript.dir/main.c.obj"
	C:\MyTools\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\typingscript.dir\main.c.obj -c C:\Source\projects-web\BLJ2021-Aufgaben-C\BLJ2021MiStr\C\typingscript\main.c

CMakeFiles/typingscript.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/typingscript.dir/main.c.i"
	C:\MyTools\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Source\projects-web\BLJ2021-Aufgaben-C\BLJ2021MiStr\C\typingscript\main.c > CMakeFiles\typingscript.dir\main.c.i

CMakeFiles/typingscript.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/typingscript.dir/main.c.s"
	C:\MyTools\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Source\projects-web\BLJ2021-Aufgaben-C\BLJ2021MiStr\C\typingscript\main.c -o CMakeFiles\typingscript.dir\main.c.s

# Object files for target typingscript
typingscript_OBJECTS = \
"CMakeFiles/typingscript.dir/main.c.obj"

# External object files for target typingscript
typingscript_EXTERNAL_OBJECTS =

typingscript.exe: CMakeFiles/typingscript.dir/main.c.obj
typingscript.exe: CMakeFiles/typingscript.dir/build.make
typingscript.exe: CMakeFiles/typingscript.dir/linklibs.rsp
typingscript.exe: CMakeFiles/typingscript.dir/objects1.rsp
typingscript.exe: CMakeFiles/typingscript.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Source\projects-web\BLJ2021-Aufgaben-C\BLJ2021MiStr\C\typingscript\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable typingscript.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\typingscript.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/typingscript.dir/build: typingscript.exe
.PHONY : CMakeFiles/typingscript.dir/build

CMakeFiles/typingscript.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\typingscript.dir\cmake_clean.cmake
.PHONY : CMakeFiles/typingscript.dir/clean

CMakeFiles/typingscript.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Source\projects-web\BLJ2021-Aufgaben-C\BLJ2021MiStr\C\typingscript C:\Source\projects-web\BLJ2021-Aufgaben-C\BLJ2021MiStr\C\typingscript C:\Source\projects-web\BLJ2021-Aufgaben-C\BLJ2021MiStr\C\typingscript\cmake-build-debug C:\Source\projects-web\BLJ2021-Aufgaben-C\BLJ2021MiStr\C\typingscript\cmake-build-debug C:\Source\projects-web\BLJ2021-Aufgaben-C\BLJ2021MiStr\C\typingscript\cmake-build-debug\CMakeFiles\typingscript.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/typingscript.dir/depend

