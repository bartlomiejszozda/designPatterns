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

WeatherStatisticDisplay::WeatherStatisticDisplay(std::weak_ptr<Subject> ws): ws(ws) {}

void WeatherStatisticDisplay::turnOff() {
    if(auto wsl = ws.lock()){
        wsl->removeObserver(this);
    }
    else{
        std::cout<<"weather station is empty. From StatisticDisplay"<<std::endl;
    }
}
