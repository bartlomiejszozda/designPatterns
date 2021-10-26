//
// Created by barte on 10/19/2021.
//

#include "WeatherStation.h"
#include "algorithm"
#include <iostream>

void WeatherStation::registerObserver(Observer* o) {
    vo.push_back(o);
}

void WeatherStation::removeObserver(const Observer *o){
    vo.erase(std::find(vo.begin(), vo.end(), o));
}

void WeatherStation::notifyObservers() {
    for (auto o: vo){
        if (o != nullptr){
            o->update();
        }
        else{
            std::cout<<"observer is empty"<<std::endl;
        }
    }
}

void WeatherStation::takeMeasurements(int temperature) {
    this->temperature = temperature;
    notifyObservers();
}

WeatherStation::~WeatherStation() {
    for (auto o: vo){
        if (o != nullptr){
            o->unwind();
        }
        else{
            std::cout<<"observer is empty"<<std::endl;
        }
    }
}
