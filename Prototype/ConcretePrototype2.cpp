//
// Created by barte on 10/26/2021.
//

#include "ConcretePrototype2.h"

Prototype *ConcretePrototype2::clone() {
    return new ConcretePrototype2{*this};
}

std::string ConcretePrototype2::getData() {
    return data;
}

void ConcretePrototype2::setData(std::string newData) {
    data = newData;
}
