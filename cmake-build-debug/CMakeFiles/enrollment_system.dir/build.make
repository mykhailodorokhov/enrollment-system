# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mykhailodorokhov/Documents/Sasha/enrollment-system

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mykhailodorokhov/Documents/Sasha/enrollment-system/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/enrollment_system.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/enrollment_system.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/enrollment_system.dir/flags.make

CMakeFiles/enrollment_system.dir/main.cpp.o: CMakeFiles/enrollment_system.dir/flags.make
CMakeFiles/enrollment_system.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mykhailodorokhov/Documents/Sasha/enrollment-system/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/enrollment_system.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/enrollment_system.dir/main.cpp.o -c /Users/mykhailodorokhov/Documents/Sasha/enrollment-system/main.cpp

CMakeFiles/enrollment_system.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/enrollment_system.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mykhailodorokhov/Documents/Sasha/enrollment-system/main.cpp > CMakeFiles/enrollment_system.dir/main.cpp.i

CMakeFiles/enrollment_system.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/enrollment_system.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mykhailodorokhov/Documents/Sasha/enrollment-system/main.cpp -o CMakeFiles/enrollment_system.dir/main.cpp.s

CMakeFiles/enrollment_system.dir/Enrollee.cpp.o: CMakeFiles/enrollment_system.dir/flags.make
CMakeFiles/enrollment_system.dir/Enrollee.cpp.o: ../Enrollee.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mykhailodorokhov/Documents/Sasha/enrollment-system/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/enrollment_system.dir/Enrollee.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/enrollment_system.dir/Enrollee.cpp.o -c /Users/mykhailodorokhov/Documents/Sasha/enrollment-system/Enrollee.cpp

CMakeFiles/enrollment_system.dir/Enrollee.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/enrollment_system.dir/Enrollee.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mykhailodorokhov/Documents/Sasha/enrollment-system/Enrollee.cpp > CMakeFiles/enrollment_system.dir/Enrollee.cpp.i

CMakeFiles/enrollment_system.dir/Enrollee.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/enrollment_system.dir/Enrollee.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mykhailodorokhov/Documents/Sasha/enrollment-system/Enrollee.cpp -o CMakeFiles/enrollment_system.dir/Enrollee.cpp.s

CMakeFiles/enrollment_system.dir/Exam.cpp.o: CMakeFiles/enrollment_system.dir/flags.make
CMakeFiles/enrollment_system.dir/Exam.cpp.o: ../Exam.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mykhailodorokhov/Documents/Sasha/enrollment-system/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/enrollment_system.dir/Exam.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/enrollment_system.dir/Exam.cpp.o -c /Users/mykhailodorokhov/Documents/Sasha/enrollment-system/Exam.cpp

CMakeFiles/enrollment_system.dir/Exam.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/enrollment_system.dir/Exam.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mykhailodorokhov/Documents/Sasha/enrollment-system/Exam.cpp > CMakeFiles/enrollment_system.dir/Exam.cpp.i

CMakeFiles/enrollment_system.dir/Exam.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/enrollment_system.dir/Exam.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mykhailodorokhov/Documents/Sasha/enrollment-system/Exam.cpp -o CMakeFiles/enrollment_system.dir/Exam.cpp.s

CMakeFiles/enrollment_system.dir/Faculty.cpp.o: CMakeFiles/enrollment_system.dir/flags.make
CMakeFiles/enrollment_system.dir/Faculty.cpp.o: ../Faculty.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mykhailodorokhov/Documents/Sasha/enrollment-system/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/enrollment_system.dir/Faculty.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/enrollment_system.dir/Faculty.cpp.o -c /Users/mykhailodorokhov/Documents/Sasha/enrollment-system/Faculty.cpp

CMakeFiles/enrollment_system.dir/Faculty.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/enrollment_system.dir/Faculty.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mykhailodorokhov/Documents/Sasha/enrollment-system/Faculty.cpp > CMakeFiles/enrollment_system.dir/Faculty.cpp.i

CMakeFiles/enrollment_system.dir/Faculty.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/enrollment_system.dir/Faculty.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mykhailodorokhov/Documents/Sasha/enrollment-system/Faculty.cpp -o CMakeFiles/enrollment_system.dir/Faculty.cpp.s

CMakeFiles/enrollment_system.dir/Professor.cpp.o: CMakeFiles/enrollment_system.dir/flags.make
CMakeFiles/enrollment_system.dir/Professor.cpp.o: ../Professor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mykhailodorokhov/Documents/Sasha/enrollment-system/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/enrollment_system.dir/Professor.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/enrollment_system.dir/Professor.cpp.o -c /Users/mykhailodorokhov/Documents/Sasha/enrollment-system/Professor.cpp

CMakeFiles/enrollment_system.dir/Professor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/enrollment_system.dir/Professor.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mykhailodorokhov/Documents/Sasha/enrollment-system/Professor.cpp > CMakeFiles/enrollment_system.dir/Professor.cpp.i

CMakeFiles/enrollment_system.dir/Professor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/enrollment_system.dir/Professor.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mykhailodorokhov/Documents/Sasha/enrollment-system/Professor.cpp -o CMakeFiles/enrollment_system.dir/Professor.cpp.s

CMakeFiles/enrollment_system.dir/Application.cpp.o: CMakeFiles/enrollment_system.dir/flags.make
CMakeFiles/enrollment_system.dir/Application.cpp.o: ../Application.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mykhailodorokhov/Documents/Sasha/enrollment-system/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/enrollment_system.dir/Application.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/enrollment_system.dir/Application.cpp.o -c /Users/mykhailodorokhov/Documents/Sasha/enrollment-system/Application.cpp

CMakeFiles/enrollment_system.dir/Application.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/enrollment_system.dir/Application.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mykhailodorokhov/Documents/Sasha/enrollment-system/Application.cpp > CMakeFiles/enrollment_system.dir/Application.cpp.i

CMakeFiles/enrollment_system.dir/Application.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/enrollment_system.dir/Application.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mykhailodorokhov/Documents/Sasha/enrollment-system/Application.cpp -o CMakeFiles/enrollment_system.dir/Application.cpp.s

CMakeFiles/enrollment_system.dir/FileManager.cpp.o: CMakeFiles/enrollment_system.dir/flags.make
CMakeFiles/enrollment_system.dir/FileManager.cpp.o: ../FileManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mykhailodorokhov/Documents/Sasha/enrollment-system/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/enrollment_system.dir/FileManager.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/enrollment_system.dir/FileManager.cpp.o -c /Users/mykhailodorokhov/Documents/Sasha/enrollment-system/FileManager.cpp

CMakeFiles/enrollment_system.dir/FileManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/enrollment_system.dir/FileManager.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mykhailodorokhov/Documents/Sasha/enrollment-system/FileManager.cpp > CMakeFiles/enrollment_system.dir/FileManager.cpp.i

CMakeFiles/enrollment_system.dir/FileManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/enrollment_system.dir/FileManager.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mykhailodorokhov/Documents/Sasha/enrollment-system/FileManager.cpp -o CMakeFiles/enrollment_system.dir/FileManager.cpp.s

# Object files for target enrollment_system
enrollment_system_OBJECTS = \
"CMakeFiles/enrollment_system.dir/main.cpp.o" \
"CMakeFiles/enrollment_system.dir/Enrollee.cpp.o" \
"CMakeFiles/enrollment_system.dir/Exam.cpp.o" \
"CMakeFiles/enrollment_system.dir/Faculty.cpp.o" \
"CMakeFiles/enrollment_system.dir/Professor.cpp.o" \
"CMakeFiles/enrollment_system.dir/Application.cpp.o" \
"CMakeFiles/enrollment_system.dir/FileManager.cpp.o"

# External object files for target enrollment_system
enrollment_system_EXTERNAL_OBJECTS =

enrollment_system: CMakeFiles/enrollment_system.dir/main.cpp.o
enrollment_system: CMakeFiles/enrollment_system.dir/Enrollee.cpp.o
enrollment_system: CMakeFiles/enrollment_system.dir/Exam.cpp.o
enrollment_system: CMakeFiles/enrollment_system.dir/Faculty.cpp.o
enrollment_system: CMakeFiles/enrollment_system.dir/Professor.cpp.o
enrollment_system: CMakeFiles/enrollment_system.dir/Application.cpp.o
enrollment_system: CMakeFiles/enrollment_system.dir/FileManager.cpp.o
enrollment_system: CMakeFiles/enrollment_system.dir/build.make
enrollment_system: CMakeFiles/enrollment_system.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mykhailodorokhov/Documents/Sasha/enrollment-system/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable enrollment_system"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/enrollment_system.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/enrollment_system.dir/build: enrollment_system

.PHONY : CMakeFiles/enrollment_system.dir/build

CMakeFiles/enrollment_system.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/enrollment_system.dir/cmake_clean.cmake
.PHONY : CMakeFiles/enrollment_system.dir/clean

CMakeFiles/enrollment_system.dir/depend:
	cd /Users/mykhailodorokhov/Documents/Sasha/enrollment-system/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mykhailodorokhov/Documents/Sasha/enrollment-system /Users/mykhailodorokhov/Documents/Sasha/enrollment-system /Users/mykhailodorokhov/Documents/Sasha/enrollment-system/cmake-build-debug /Users/mykhailodorokhov/Documents/Sasha/enrollment-system/cmake-build-debug /Users/mykhailodorokhov/Documents/Sasha/enrollment-system/cmake-build-debug/CMakeFiles/enrollment_system.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/enrollment_system.dir/depend

