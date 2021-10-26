//
// Created by barte on 10/19/2021.
//

#include "WeatherCurrentDisplay.h"
#include "iostream"


void WeatherCurrentDisplay::display() {
    std::cout<<"current display"<<std::endl;
}

void WeatherCurrentDisplay::update() {
    std::cout<<"current update"<<std::endl;
}

WeatherCurrentDisplay::WeatherCurrentDisplay(Subject* ws) : ws(ws) {}

void WeatherCurrentDisplay::turnOff() {
    if(ws != nullptr){
        ws->removeObserver(this);
    }
    else{
        std::cout<<"weather station is nullptr. From CurrentDisplay"<<std::endl;
    }
}

void WeatherCurrentDisplay::unwind() {
    ws = nullptr;
}

WeatherCurrentDisplay::~WeatherCurrentDisplay() {
    if(ws != nullptr){
        ws->removeObserver(this);
    }
    else{
        std::cout<<"weather station is nullptr. From CurrentDisplay Destructor"<<std::endl;
    }
}
