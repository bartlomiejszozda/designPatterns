//
// Created by barte on 10/19/2021.
//

#ifndef OBSERVER_WEATHERSTATISTICDISPLAY_H
#define OBSERVER_WEATHERSTATISTICDISPLAY_H
#include "WeatherDisplay.h"
#include "WeatherStation.h"
#include "Observer.h"


class WeatherStatisticDisplay: public WeatherDisplay, public Observer {
public:
    WeatherStatisticDisplay(Subject* ws);
    void display() override;
    void update() override;
    void turnOff() override;
    void unwind() override;

    virtual ~WeatherStatisticDisplay();

private:
    Subject* ws;
};


#endif //OBSERVER_WEATHERSTATISTICDISPLAY_H
