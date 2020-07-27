cmake_minimum_required(VERSION 3.16)
project(HeaderOnlyLibrary)

set(CMAKE_CXX_STANDARD 14)

FIND_PACKAGE(Eigen3 REQUIRED NO_MODULE)

set(LIB_NAME headeronly)
message(STATUS "LIB_NAME=${LIB_NAME}")

add_library(${LIB_NAME} INTERFACE)
target_include_directories(${LIB_NAME} INTERFACE $<BUILD_INTERFACE:${${PROJECT_NAME}_SOURCE_DIR}/includes>)
target_link_libraries(${LIB_NAME} INTERFACE Eigen3::Eigen)