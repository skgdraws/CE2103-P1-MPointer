cmake_minimum_required(VERSION 3.29)
project(Test)

set(CMAKE_CXX_STANDARD 17)

add_executable(Test main.cpp)

target_link_libraries(Test PRIVATE "${CMAKE_SOURCE_DIR}/../MPointer/cmake-build-debug/libMPointer.a")
target_include_directories(Test PRIVATE ../MPointer)