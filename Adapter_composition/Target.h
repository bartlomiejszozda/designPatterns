//
// Created by barte on 10/31/2021.
//

#ifndef ADAPTER_CLASS_TARGET_H
#define ADAPTER_CLASS_TARGET_H

class Target {
public:
    virtual int calcSomething(float num) = 0;
    virtual ~Target() = default;
};


#endif //ADAPTER_CLASS_TARGET_H
