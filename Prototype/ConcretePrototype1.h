//
// Created by barte on 10/26/2021.
//

#ifndef PROTOTYPE_CONCRETEPROTOTYPE_H
#define PROTOTYPE_CONCRETEPROTOTYPE_H
#include "Prototype.h"
#include <iostream>

class ConcretePrototype1: public Prototype {
public:
    ConcretePrototype1() = default;
    ConcretePrototype1(const ConcretePrototype1&) {std::cout<<"ConcretePrototype1 copy ctor"<<std::endl;};
    ConcretePrototype1& operator=(const ConcretePrototype1&) {std::cout<<"ConcretePrototype1 copy assignment"<<std::endl;};
    ConcretePrototype1(ConcretePrototype1&&) {std::cout<<"ConcretePrototype1 move ctor"<<std::endl;};
    ConcretePrototype1& operator=(ConcretePrototype1&&) {std::cout<<"ConcretePrototype1 move assignment"<<std::endl;};
    ~ConcretePrototype1() override = default;

    std::shared_ptr<Prototype> clone() override;
    std::string getData() override;
    void setData(std::string newData) override;
};


#endif //PROTOTYPE_CONCRETEPROTOTYPE_H
