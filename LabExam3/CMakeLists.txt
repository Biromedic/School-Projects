cmake_minimum_required(VERSION 3.25)
project(LabExam3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(LabExam3
        Car.cpp
        Car.h
        FormulaCar.cpp
        FormulaCar.h
        Main.cpp
        Motorcycle.cpp
        Motorcycle.h
        RacingVehicle.cpp
        RacingVehicle.h
        Track.cpp
        Track.h)
