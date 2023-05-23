cmake_minimum_required(VERSION 3.24)
project(New_folder)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(New_folder
        Planet.cpp
        Planet.h Spaceship.h Spaceship.cpp main.cpp)
