cmake_minimum_required(VERSION 3.24)
project(HospitalLab)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(HospitalLab
        .idea/.gitignore
        .idea/HospitalLab.iml
        .idea/modules.xml
        .idea/workspace.xml
        Hospital.c
        Hospital.sln
        Hospital.vcxproj
        Patient.h
        RandomPatients.txt)
