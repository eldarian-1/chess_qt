# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/eldarian/Документы/chess_qt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eldarian/Документы/chess_qt/cmake-build-debug

# Include any dependencies generated for this target.
include chess_logic/CMakeFiles/chess_logic.dir/depend.make

# Include the progress variables for this target.
include chess_logic/CMakeFiles/chess_logic.dir/progress.make

# Include the compile flags for this target's objects.
include chess_logic/CMakeFiles/chess_logic.dir/flags.make

chess_logic/CMakeFiles/chess_logic.dir/a.cpp.o: chess_logic/CMakeFiles/chess_logic.dir/flags.make
chess_logic/CMakeFiles/chess_logic.dir/a.cpp.o: ../chess_logic/a.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eldarian/Документы/chess_qt/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object chess_logic/CMakeFiles/chess_logic.dir/a.cpp.o"
	cd /home/eldarian/Документы/chess_qt/cmake-build-debug/chess_logic && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/chess_logic.dir/a.cpp.o -c /home/eldarian/Документы/chess_qt/chess_logic/a.cpp

chess_logic/CMakeFiles/chess_logic.dir/a.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chess_logic.dir/a.cpp.i"
	cd /home/eldarian/Документы/chess_qt/cmake-build-debug/chess_logic && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eldarian/Документы/chess_qt/chess_logic/a.cpp > CMakeFiles/chess_logic.dir/a.cpp.i

chess_logic/CMakeFiles/chess_logic.dir/a.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chess_logic.dir/a.cpp.s"
	cd /home/eldarian/Документы/chess_qt/cmake-build-debug/chess_logic && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eldarian/Документы/chess_qt/chess_logic/a.cpp -o CMakeFiles/chess_logic.dir/a.cpp.s

# Object files for target chess_logic
chess_logic_OBJECTS = \
"CMakeFiles/chess_logic.dir/a.cpp.o"

# External object files for target chess_logic
chess_logic_EXTERNAL_OBJECTS =

chess_logic/libchess_logic.a: chess_logic/CMakeFiles/chess_logic.dir/a.cpp.o
chess_logic/libchess_logic.a: chess_logic/CMakeFiles/chess_logic.dir/build.make
chess_logic/libchess_logic.a: chess_logic/CMakeFiles/chess_logic.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/eldarian/Документы/chess_qt/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libchess_logic.a"
	cd /home/eldarian/Документы/chess_qt/cmake-build-debug/chess_logic && $(CMAKE_COMMAND) -P CMakeFiles/chess_logic.dir/cmake_clean_target.cmake
	cd /home/eldarian/Документы/chess_qt/cmake-build-debug/chess_logic && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/chess_logic.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
chess_logic/CMakeFiles/chess_logic.dir/build: chess_logic/libchess_logic.a

.PHONY : chess_logic/CMakeFiles/chess_logic.dir/build

chess_logic/CMakeFiles/chess_logic.dir/clean:
	cd /home/eldarian/Документы/chess_qt/cmake-build-debug/chess_logic && $(CMAKE_COMMAND) -P CMakeFiles/chess_logic.dir/cmake_clean.cmake
.PHONY : chess_logic/CMakeFiles/chess_logic.dir/clean

chess_logic/CMakeFiles/chess_logic.dir/depend:
	cd /home/eldarian/Документы/chess_qt/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eldarian/Документы/chess_qt /home/eldarian/Документы/chess_qt/chess_logic /home/eldarian/Документы/chess_qt/cmake-build-debug /home/eldarian/Документы/chess_qt/cmake-build-debug/chess_logic /home/eldarian/Документы/chess_qt/cmake-build-debug/chess_logic/CMakeFiles/chess_logic.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : chess_logic/CMakeFiles/chess_logic.dir/depend

