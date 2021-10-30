# cmake_minimum_required(VERSION <specify CMake version here>)
project(Adapter_composition)

set(CMAKE_CXX_STANDARD 17)

add_executable(Adapter_composition main.cpp Adapter.cpp Adaptee.cpp)