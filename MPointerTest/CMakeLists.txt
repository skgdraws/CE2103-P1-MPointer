cmake_minimum_required(VERSION 3.29)
project(MPointer_Test)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory("../Library MPointer" "../../Library MPointer/build/debug/")

add_executable(MPointer_Test main.cpp)

target_link_libraries(MPointer_Test PRIVATE "${CMAKE_CURRENT_LIST_DIR}/Library MPointer/build/debug/libMPointer_Library.a")
target_include_directories(MPointer_Test PRIVATE "../Library MPointer/")