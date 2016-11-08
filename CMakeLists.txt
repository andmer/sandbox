cmake_minimum_required(VERSION 3.6)
project(sandbox)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3 -std=c++11")

set(SOURCE_FILES ride.cpp)
add_executable(sandbox ${SOURCE_FILES})