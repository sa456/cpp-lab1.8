cmake_minimum_required(VERSION 3.8)
project(lab1)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp ArrayList.cpp ArrayList.h)
add_executable(lab1 ${SOURCE_FILES} ArrayList.cpp ArrayList.h)