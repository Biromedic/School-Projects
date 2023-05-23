cmake_minimum_required(VERSION 3.23)
project(Battle_Simulator)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Battle_Simulator
        main.cpp
        Monster.cpp
        Monster.h
        Player.cpp
        Player.h)
