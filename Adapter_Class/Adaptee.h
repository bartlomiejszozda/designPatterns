//
// Created by barte on 10/31/2021.
//

#ifndef ADAPTER_CLASS_ADAPTEE_H
#define ADAPTER_CLASS_ADAPTEE_H


class Adaptee {
public:
    float legacyCalcSomethingA(float num);
    float legacyCalcSomethingB(float num);

    virtual ~Adaptee();
};


#endif //ADAPTER_CLASS_ADAPTEE_H
