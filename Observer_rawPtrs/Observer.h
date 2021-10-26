//
// Created by barte on 10/19/2021.
//

#ifndef OBSERVER_OBSERVER_H
#define OBSERVER_OBSERVER_H


class Observer {
public:
    virtual void update()=0;
    virtual void unwind()=0;
};


#endif //OBSERVER_OBSERVER_H
