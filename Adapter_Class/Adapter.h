//
// Created by barte on 10/31/2021.
//

#ifndef ADAPTER_CLASS_ADAPTER_H
#define ADAPTER_CLASS_ADAPTER_H
#include "Target.h"
#include "Adaptee.h"


class Adapter: public Target, public Adaptee {
public:
    int calcSomething(float num) override;
};


#endif //ADAPTER_CLASS_ADAPTER_H
