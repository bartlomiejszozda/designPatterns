#include <iostream>
#include "WeatherStation.h"
#include "WeatherCurrentDisplay.h"
#include "WeatherStatisticDisplay.h"
#include "memory"

void weatherStation(){
    auto ws = new WeatherStation;
    auto wcd = new WeatherCurrentDisplay(ws);
    auto wsd = new WeatherStatisticDisplay(ws);
    ws->registerObserver(wcd);
    ws->registerObserver(wsd);
    std::cout<<"----------------- 1"<<std::endl;
    ws->takeMeasurements(23);
    std::cout<<"----------------- 2"<<std::endl;
    wcd->turnOff();
    ws->takeMeasurements(25);
    std::cout<<"----------------- 3"<<std::endl;
    ws->registerObserver(wcd);
    ws->takeMeasurements(27);
    std::cout<<"----------------- 4"<<std::endl;
    delete(wcd);
    if(wcd != nullptr){
        std::cout<<"wcd nullptr"<<std::endl;
    }
    ws->takeMeasurements(27);
    std::cout<<"----------------- 5"<<std::endl;
    delete(ws);
    wsd->turnOff();
    delete(wsd);
}

int main() {
    weatherStation();
    return 0;
}
