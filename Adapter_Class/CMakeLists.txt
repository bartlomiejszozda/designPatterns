# cmake_minimum_required(VERSION <specify CMake version here>)
project(Adapter_Class)

set(CMAKE_CXX_STANDARD 17)

add_executable(Adapter_Class main.cpp Adapter.cpp Adaptee.cpp)