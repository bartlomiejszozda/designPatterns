//
// Created by barte on 10/31/2021.
//

#include "Adaptee.h"

float Adaptee::legacyCalcSomethingA(float num) {
    return num + num;
}

float Adaptee::legacyCalcSomethingB(float num) {
    return num * num;
}

Adaptee::~Adaptee() = default;
