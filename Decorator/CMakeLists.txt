# cmake_minimum_required(VERSION <specify CMake version here>)
project(Decorator)

set(CMAKE_CXX_STANDARD 17)

add_executable(Decorator main.cpp Pizza.h WheatDough.cpp WheatDough.h ToppingDecorator.h Mozzarella.cpp Mozzarella.h Ham.cpp Ham.h)