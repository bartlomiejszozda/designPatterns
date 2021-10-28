# cmake_minimum_required(VERSION <specify CMake version here>)
project(ObjectPool)

set(CMAKE_CXX_STANDARD 17)

add_executable(ObjectPool main.cpp ObjectPool.cpp SharedObject.cpp)