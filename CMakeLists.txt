cmake_minimum_required(VERSION 3.7)
project(ArbolAVL)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Tree.cpp Tree.h Node.cpp Node.h)
add_executable(ArbolAVL ${SOURCE_FILES})