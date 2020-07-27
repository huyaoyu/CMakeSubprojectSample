cmake_minimum_required(VERSION 3.16)
project(ConcreteLibrary)

set(CMAKE_CXX_STANDARD 14)

FIND_PACKAGE(Eigen3 REQUIRED NO_MODULE)

set(LIB_NAME concrete)

add_library(${LIB_NAME} src/ConcreteLibrary.cpp)
target_include_directories(${LIB_NAME} PUBLIC includes)
target_link_libraries(${LIB_NAME} Eigen3::Eigen)