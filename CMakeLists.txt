cmake_minimum_required(VERSION 2.8)
project(Assign1)

if (CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS "-std=c++11 -O3 ${CMAKE_CXX_FLAGS}")
endif()

add_executable(assign2 CompE.hpp CompE.cpp CompPi.hpp CompPi.cpp CompFib.hpp CompFib.cpp main.cpp)