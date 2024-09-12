cmake_minimum_required(VERSION 3.29)
project(MPointer_Library)

set(CMAKE_CXX_STANDARD 20)

# Setting up Paths
set(SOURCE_FILES
        MPointerGC.cpp MPointerGC.h
        MPointer.cpp MPointer.h
        Nodo.h
        Nodo.cpp
        Lista.h
        Lista.cpp
)

add_library(MPointer_Library ${SOURCE_FILES})
