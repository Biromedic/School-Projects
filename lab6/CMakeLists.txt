cmake_minimum_required(VERSION 3.24)
project(lab6)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lab6
        Circle.cpp
        Circle.h
        main.cpp
        Rectangle.cpp
        Rectangle.h
        Shape.cpp
        Shape.h
        Triangle.cpp
        Triangle.h)
