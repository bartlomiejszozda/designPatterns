# cmake_minimum_required(VERSION <specify CMake version here>)
project(Observer)

set(CMAKE_CXX_STANDARD 14)

add_executable(Observer_rawPtrs main.cpp Subject.h Observer.h WeatherDisplay.h WeatherCurrentDisplay.cpp WeatherCurrentDisplay.h WeatherStatisticDisplay.cpp WeatherStatisticDisplay.h WeatherStation.cpp WeatherStation.h)