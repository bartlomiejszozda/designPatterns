//
// Created by barte on 10/19/2021.
//

#include "WeatherStatisticDisplay.h"
#include "iostream"

void WeatherStatisticDisplay::display() {
    std::cout<<"statistic display"<<std::endl;
}

void WeatherStatisticDisplay::update() {
    std::cout<<"statistic update"<<std::endl;
}

WeatherStatisticDisplay::WeatherStatisticDisplay(Subject* ws):ws(ws) {}

void WeatherStatisticDisplay::turnOff() {
    if(ws != nullptr){
        ws->removeObserver(this);
    }
    else{
        std::cout<<"weather station is nullptr. From StatisticDisplay"<<std::endl;
    }
}

void WeatherStatisticDisplay::unwind() {
    ws = nullptr;
}

WeatherStatisticDisplay::~WeatherStatisticDisplay() {
    if(ws != nullptr){
        ws->removeObserver(this);
    }
    else{
        std::cout<<"weather station is nullptr. From StatisticDisplay Destructor"<<std::endl;
    }
}
