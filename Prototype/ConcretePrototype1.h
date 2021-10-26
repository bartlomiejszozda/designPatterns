//
// Created by barte on 10/26/2021.
//

#ifndef PROTOTYPE_CONCRETEPROTOTYPE_H
#define PROTOTYPE_CONCRETEPROTOTYPE_H
#include "Prototype.h"

class ConcretePrototype1: public Prototype {
public:
    Prototype * clone() override;
    ~ConcretePrototype1() override = default;
    void setData(std::string newData) override;
    std::string getData();
private:
//    std::string data = "ConcretePrototype1";
};


#endif //PROTOTYPE_CONCRETEPROTOTYPE_H
