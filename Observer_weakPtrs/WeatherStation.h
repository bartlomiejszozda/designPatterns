//
// Created by barte on 10/19/2021.
//

#ifndef OBSERVER_WEATHERSTATION_H
#define OBSERVER_WEATHERSTATION_H
#include "Subject.h"
#include <vector>
#include <memory>


class WeatherStation:public Subject {
public:
    void registerObserver(std::weak_ptr<Observer> o) override;
    void removeObserver(const Observer *o) override;
    void takeMeasurements(int temperature);
    virtual ~WeatherStation() = default;
private:
    void notifyObservers() override;

    std::vector<std::weak_ptr<Observer>> vo;
    int temperature = 20;
};


#endif //OBSERVER_WEATHERSTATION_H
