//
// Created by barte on 10/19/2021.
//

#ifndef OBSERVER_WEATHERCURRENTDISPLAY_H
#define OBSERVER_WEATHERCURRENTDISPLAY_H
#include "WeatherDisplay.h"
#include "WeatherStation.h"
#include "Observer.h"
#include "memory"


class WeatherCurrentDisplay: public WeatherDisplay, public Observer{
public:
    WeatherCurrentDisplay(const std::weak_ptr<Subject> ws);
    void display() override;
    void turnOff() override;
    void update() override;
    virtual ~WeatherCurrentDisplay() = default;
private:
    std::weak_ptr<Subject> ws;
};


#endif //OBSERVER_WEATHERCURRENTDISPLAY_H
