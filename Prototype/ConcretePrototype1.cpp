//
// Created by barte on 10/26/2021.
//

#include "ConcretePrototype1.h"

Prototype * ConcretePrototype1::clone() {
    return new ConcretePrototype1{*this};
}

std::string ConcretePrototype1::getData() {
    return data;
}

void ConcretePrototype1::setData(std::string newData) {
    data = newData;
}
