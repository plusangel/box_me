cmake_minimum_required(VERSION 3.14)
project(box_me)

set(CMAKE_CXX_STANDARD 17)

add_library(box_library Box.cpp)
add_library(cube_library Cube.cpp)

add_executable(box_me main.cpp)
target_link_libraries(box_me box_library)