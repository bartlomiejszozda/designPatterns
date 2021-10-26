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
    void registerObserver(Observer* o) override;
    void removeObserver(const Observer *o) override;
    void takeMeasurements(int temperature);
    virtual ~WeatherStation();
private:
    void notifyObservers() override;

    std::vector<Observer*> vo;
    int temperature = 20;
};


#endif //OBSERVER_WEATHERSTATION_H
