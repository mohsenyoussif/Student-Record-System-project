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
CMAKE_COMMAND = "D:\CLion 2021.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2021.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "F:\mohsen\Self Study\embedded\c programing\Student Record System project"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "F:\mohsen\Self Study\embedded\c programing\Student Record System project\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Student_Record_System_project.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Student_Record_System_project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Student_Record_System_project.dir/flags.make

CMakeFiles/Student_Record_System_project.dir/main.c.obj: CMakeFiles/Student_Record_System_project.dir/flags.make
CMakeFiles/Student_Record_System_project.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="F:\mohsen\Self Study\embedded\c programing\Student Record System project\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Student_Record_System_project.dir/main.c.obj"
	D:\gcc64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Student_Record_System_project.dir\main.c.obj -c "F:\mohsen\Self Study\embedded\c programing\Student Record System project\main.c"

CMakeFiles/Student_Record_System_project.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Student_Record_System_project.dir/main.c.i"
	D:\gcc64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "F:\mohsen\Self Study\embedded\c programing\Student Record System project\main.c" > CMakeFiles\Student_Record_System_project.dir\main.c.i

CMakeFiles/Student_Record_System_project.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Student_Record_System_project.dir/main.c.s"
	D:\gcc64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "F:\mohsen\Self Study\embedded\c programing\Student Record System project\main.c" -o CMakeFiles\Student_Record_System_project.dir\main.c.s

CMakeFiles/Student_Record_System_project.dir/system.c.obj: CMakeFiles/Student_Record_System_project.dir/flags.make
CMakeFiles/Student_Record_System_project.dir/system.c.obj: ../system.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="F:\mohsen\Self Study\embedded\c programing\Student Record System project\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Student_Record_System_project.dir/system.c.obj"
	D:\gcc64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Student_Record_System_project.dir\system.c.obj -c "F:\mohsen\Self Study\embedded\c programing\Student Record System project\system.c"

CMakeFiles/Student_Record_System_project.dir/system.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Student_Record_System_project.dir/system.c.i"
	D:\gcc64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "F:\mohsen\Self Study\embedded\c programing\Student Record System project\system.c" > CMakeFiles\Student_Record_System_project.dir\system.c.i

CMakeFiles/Student_Record_System_project.dir/system.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Student_Record_System_project.dir/system.c.s"
	D:\gcc64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "F:\mohsen\Self Study\embedded\c programing\Student Record System project\system.c" -o CMakeFiles\Student_Record_System_project.dir\system.c.s

CMakeFiles/Student_Record_System_project.dir/privileges.c.obj: CMakeFiles/Student_Record_System_project.dir/flags.make
CMakeFiles/Student_Record_System_project.dir/privileges.c.obj: ../privileges.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="F:\mohsen\Self Study\embedded\c programing\Student Record System project\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Student_Record_System_project.dir/privileges.c.obj"
	D:\gcc64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Student_Record_System_project.dir\privileges.c.obj -c "F:\mohsen\Self Study\embedded\c programing\Student Record System project\privileges.c"

CMakeFiles/Student_Record_System_project.dir/privileges.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Student_Record_System_project.dir/privileges.c.i"
	D:\gcc64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "F:\mohsen\Self Study\embedded\c programing\Student Record System project\privileges.c" > CMakeFiles\Student_Record_System_project.dir\privileges.c.i

CMakeFiles/Student_Record_System_project.dir/privileges.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Student_Record_System_project.dir/privileges.c.s"
	D:\gcc64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "F:\mohsen\Self Study\embedded\c programing\Student Record System project\privileges.c" -o CMakeFiles\Student_Record_System_project.dir\privileges.c.s

# Object files for target Student_Record_System_project
Student_Record_System_project_OBJECTS = \
"CMakeFiles/Student_Record_System_project.dir/main.c.obj" \
"CMakeFiles/Student_Record_System_project.dir/system.c.obj" \
"CMakeFiles/Student_Record_System_project.dir/privileges.c.obj"

# External object files for target Student_Record_System_project
Student_Record_System_project_EXTERNAL_OBJECTS =

Student_Record_System_project.exe: CMakeFiles/Student_Record_System_project.dir/main.c.obj
Student_Record_System_project.exe: CMakeFiles/Student_Record_System_project.dir/system.c.obj
Student_Record_System_project.exe: CMakeFiles/Student_Record_System_project.dir/privileges.c.obj
Student_Record_System_project.exe: CMakeFiles/Student_Record_System_project.dir/build.make
Student_Record_System_project.exe: CMakeFiles/Student_Record_System_project.dir/linklibs.rsp
Student_Record_System_project.exe: CMakeFiles/Student_Record_System_project.dir/objects1.rsp
Student_Record_System_project.exe: CMakeFiles/Student_Record_System_project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="F:\mohsen\Self Study\embedded\c programing\Student Record System project\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable Student_Record_System_project.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Student_Record_System_project.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Student_Record_System_project.dir/build: Student_Record_System_project.exe
.PHONY : CMakeFiles/Student_Record_System_project.dir/build

CMakeFiles/Student_Record_System_project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Student_Record_System_project.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Student_Record_System_project.dir/clean

CMakeFiles/Student_Record_System_project.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "F:\mohsen\Self Study\embedded\c programing\Student Record System project" "F:\mohsen\Self Study\embedded\c programing\Student Record System project" "F:\mohsen\Self Study\embedded\c programing\Student Record System project\cmake-build-debug" "F:\mohsen\Self Study\embedded\c programing\Student Record System project\cmake-build-debug" "F:\mohsen\Self Study\embedded\c programing\Student Record System project\cmake-build-debug\CMakeFiles\Student_Record_System_project.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Student_Record_System_project.dir/depend

