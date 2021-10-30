//
// Created by barte on 10/31/2021.
//

#include "Adapter.h"
#include <math.h>

int Adapter::calcSomething(float num) {
    ceil(adaptee.legacyCalcSomethingB(adaptee.legacyCalcSomethingA(num)));
}

Adapter::Adapter(Adaptee&& adaptee) : adaptee(adaptee) {}
