//
// Created by barte on 10/19/2021.
//

#ifndef OBSERVER_WEATHERDISPLAY_H
#define OBSERVER_WEATHERDISPLAY_H


class WeatherDisplay {
public:
    virtual void display()=0;
    virtual void turnOff()=0;
    virtual ~WeatherDisplay() = default;
};


#endif //OBSERVER_WEATHERDISPLAY_H
