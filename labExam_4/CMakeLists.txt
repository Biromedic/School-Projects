cmake_minimum_required(VERSION 3.25)
project(labExam_4)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(labExam_4
        Calculator.cpp
        Operation.cpp
        Operation.h)
