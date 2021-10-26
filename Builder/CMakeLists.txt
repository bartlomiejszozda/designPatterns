cmake_minimum_required(VERSION 3.10)
project(Builder)

set(CMAKE_CXX_STANDARD 14)

add_executable(Builder main.cpp ConcreteBuilder.cpp Director.cpp)
target_include_directories(Builder PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})