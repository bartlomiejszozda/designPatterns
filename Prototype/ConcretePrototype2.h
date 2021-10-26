//
// Created by barte on 10/26/2021.
//

#ifndef PROTOTYPE_CONCRETEPROTOTYPE2_H
#define PROTOTYPE_CONCRETEPROTOTYPE2_H
#include "Prototype.h"


class ConcretePrototype2: public Prototype {
public:
    Prototype *clone() override;
    ~ConcretePrototype2() override = default;
    std::string getData() override;
    void setData(std::string newData) override;
private:
//    std::string data = "ConcretePrototype2";
};


#endif //PROTOTYPE_CONCRETEPROTOTYPE2_H
