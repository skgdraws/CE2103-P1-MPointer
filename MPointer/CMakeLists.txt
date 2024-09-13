cmake_minimum_required(VERSION 3.29)
project(MPointer)

set(CMAKE_CXX_STANDARD 17)

# Setting up Paths
set(SOURCE_FILES
        MPointer.h
        MPointerGC.cpp
        MPointerGC.h
)
set(DATA_STRUCTURES
        DataStructures/Node.h
        DataStructures/LinkedList.h
        DataStructures/Node.cpp
        DataStructures/LinkedList.cpp
)


add_library(MPointer STATIC ${SOURCE_FILES} ${DATA_STRUCTURES})
