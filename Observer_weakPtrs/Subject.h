//
// Created by barte on 10/19/2021.
//

#ifndef OBSERVER_SUBJECT_H
#define OBSERVER_SUBJECT_H

#include <memory>
#include "Observer.h"


class Subject {
public:
    virtual void registerObserver(std::weak_ptr<Observer> o) =0;
    virtual void removeObserver(const Observer *o) =0;

    virtual ~Subject() = default;
private:
    virtual void notifyObservers()=0;
};


#endif //OBSERVER_SUBJECT_H
