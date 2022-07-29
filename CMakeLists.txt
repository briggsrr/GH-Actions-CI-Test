cmake_minimum_required(VERSION 3.23.2)

set(This Example)

project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

set(Headers
    Example.h
)

set(Sources
    Example.cpp
)
add_library(${This} STATIC ${Sources} ${Headers})


add_subdirectory(test)
add_subdirectory(googletest)

