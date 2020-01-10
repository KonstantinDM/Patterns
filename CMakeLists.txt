cmake_minimum_required (VERSION 3.8)

set(CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_FLAGS "-std=c++11 -pthread")

project ("Patterns" VERSION 1.0)

file(GLOB SOURCES "Sources/*.cpp" "Include/*.h")

add_executable(Patterns ${SOURCES})