# cmake_minimum_required(VERSION <specify CMake version here>)
project(FactoryMethod)

set(CMAKE_CXX_STANDARD 17)

add_executable(FactoryMethod main.cpp ConcreteProduct1.cpp ConcreteProduct2.cpp ConcreteProduct1Creator.cpp ConcreteProduct2Creator.cpp)