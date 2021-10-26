#include <iostream>
#include "WeatherStation.h"
#include "WeatherCurrentDisplay.h"
#include "WeatherStatisticDisplay.h"
#include "memory"

int main() {
    auto ws = std::make_shared<WeatherStation>();
    auto wcd = std::make_shared<WeatherCurrentDisplay>(ws);
    auto wsd = std::make_shared<WeatherStatisticDisplay>(ws);
//    ws.registerObserver(std::dynamic_pointer_cast<Observer, WeatherCurrentDisplay>(wcd));
//    ws.registerObserver(std::dynamic_pointer_cast<Observer, WeatherStatisticDisplay>(wsd));
    ws->registerObserver(wcd);
    ws->registerObserver(wsd);
    std::cout<<"----------------- 1"<<std::endl;
    ws->takeMeasurements(23);
    std::cout<<"----------------- 2"<<std::endl;
    wcd->turnOff();
    ws->takeMeasurements(25);
    ws->registerObserver(wcd);
    std::cout<<"----------------- 3"<<std::endl;
    wcd.reset();
    ws->takeMeasurements(27);
    std::cout<<"----------------- 4"<<std::endl;
    ws.reset();
    wsd->turnOff();
    std::cout<<"----------------- 5"<<std::endl;
    try{
        throw (std::runtime_error("blabla"));
    }
    catch(std::exception& e){
        std::cout<<e.what()<<std::endl;
    }
    catch(...){
        std::cout<<"catch all"<<std::endl;
    }

    return 0;
}
