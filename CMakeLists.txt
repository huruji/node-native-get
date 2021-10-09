cmake_minimum_required(VERSION 3.20)
project(node_native_get)

set(CMAKE_CXX_STANDARD 14)

include_directories(/usr/local/include/node)


add_executable(node_native_get
        index.cpp)
