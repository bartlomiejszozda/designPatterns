//
// Created by barte on 10/19/2021.
//

#include "WeatherStation.h"
#include "algorithm"
#include <iostream>

void WeatherStation::registerObserver(std::weak_ptr<Observer> o) {
    vo.push_back(std::move(o));
}

void WeatherStation::removeObserver(const Observer *o) {
    auto lam = [o](auto el){
        if(auto ell = el.lock()){
            return ell.get() == o;
        }
        else{
            std::cout<<"observer is empty. From Station::removeObserver()"<<std::endl;
        }
    };

    vo.erase(std::find_if(vo.begin(), vo.end(), lam));
}

void WeatherStation::notifyObservers() {
    for (auto o: vo){
        if (auto ol = o.lock()){
            ol->update();
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
