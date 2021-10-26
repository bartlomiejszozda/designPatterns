//
// Created by barte on 10/26/2021.
//

#include "ConcretePrototype2.h"

std::shared_ptr<Prototype> ConcretePrototype2::clone() {
//    copy when copyctor private
//    return std::make_shared<ConcretePrototype2>(ConcretePrototype2(*this));
    return std::shared_ptr<ConcretePrototype2>(new ConcretePrototype2(*this));
}

std::string ConcretePrototype2::getData() {
    return data;
}

void ConcretePrototype2::setData(std::string newData) {
    data = newData;
}
