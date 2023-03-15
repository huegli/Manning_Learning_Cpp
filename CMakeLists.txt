# Specify the minimum version of CMake that can run this script
cmake_minimum_required(VERSION 3.12)

# Project name and version
project(learningcpp VERSION 1.0)

# Request C++ 20 standard features
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# for Vim ALE
set(CMAKE_EXPORT_COMPILE_COMMANDS True)

add_subdirectory(chap2)
add_subdirectory(chap3)
add_subdirectory(chap4)
