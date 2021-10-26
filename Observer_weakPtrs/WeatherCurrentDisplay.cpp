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

WeatherCurrentDisplay::WeatherCurrentDisplay(const std::weak_ptr<Subject> ws) : ws(ws) {}

void WeatherCurrentDisplay::turnOff() {
    if(auto wsl = ws.lock()){
        wsl->removeObserver(this);
    }
    else{
        std::cout<<"weather station is empty. From CurrentDisplay"<<std::endl;
    }
}
