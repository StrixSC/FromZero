cmake_minimum_required(VERSION 3.10)
project(zer0)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_VERBOSE_MAKEFILE OFF)

set (
    SOURCE_FILES
        main.cpp
        LibDS/StaticArray.h
        LibDS/StaticArray.cpp
)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
