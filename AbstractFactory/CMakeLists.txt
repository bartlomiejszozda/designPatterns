# cmake_minimum_required(VERSION <specify CMake version here>)
project(AbstractFactory)

set(CMAKE_CXX_STANDARD 17)

add_executable(AbstractFactory main.cpp Product1Family1.cpp FactoryFamily1.cpp Product2Family1.cpp  Product1Family2.cpp  Product2Family2.cpp FactoryFamily2.cpp AbstractFactory.cpp)