# cmake_minimum_required(VERSION <specify CMake version here>)
project(Prototype)

set(CMAKE_CXX_STANDARD 17)

add_executable(Prototype main.cpp ConcretePrototype1 ConcretePrototype2.cpp ConcretePrototype2.h)