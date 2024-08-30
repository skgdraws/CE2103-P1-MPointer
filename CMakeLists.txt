cmake_minimum_required(VERSION 3.29)
project(Proyecto_I___Datos_II)

set(CMAKE_CXX_STANDARD 20)

# Setting up Paths
set(SOURCE_FILES src/main.cpp
        src/MPointerGB.cpp src/MPointerGB.h
        src/MPointer.cpp   src/MPointer.h)

add_library(Proyecto_I___Datos_II ${SOURCE_FILES})
