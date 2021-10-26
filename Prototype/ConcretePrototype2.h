//
// Created by barte on 10/26/2021.
//

#ifndef PROTOTYPE_CONCRETEPROTOTYPE2_H
#define PROTOTYPE_CONCRETEPROTOTYPE2_H
#include "Prototype.h"

class ConcretePrototype2: public Prototype {
public:
    ConcretePrototype2() = default;
    ConcretePrototype2(const ConcretePrototype2&) = default;
    ConcretePrototype2& operator=(const ConcretePrototype2&) = default;
    ConcretePrototype2(ConcretePrototype2&&) = default;
    ConcretePrototype2& operator=(ConcretePrototype2&&) = default;
    ~ConcretePrototype2() override = default;

    std::shared_ptr<Prototype> clone() override;
    std::string getData() override;
    void setData(std::string newData) override;
};


#endif //PROTOTYPE_CONCRETEPROTOTYPE2_H
