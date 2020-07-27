cmake_minimum_required(VERSION 3.16)
project(TestCMakeSubprojects)

set(CMAKE_CXX_STANDARD 14)

# Global packages.
#FIND_PACKAGE(Eigen3 REQUIRED NO_MODULE)

# Top level includes.
include_directories(common)

# Sub-projects.
add_subdirectory(ConcreteLibrary)
add_subdirectory(HeaderOnlyLibrary)

# Main executable.
set(EXE_MAIN TestCMakeSubprojects)
add_executable(${EXE_MAIN} main.cpp)
target_link_libraries(${EXE_MAIN} concrete headeronly)