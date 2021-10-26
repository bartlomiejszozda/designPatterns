//
// Created by barte on 10/26/2021.
//

#include "ConcretePrototype1.h"

std::shared_ptr<Prototype> ConcretePrototype1::clone() {
    std::cout<<"-----------"<<std::endl;
//    copy when copy ctor private
//    return std::make_shared<ConcretePrototype1>(ConcretePrototype1(*this));
    return std::shared_ptr<ConcretePrototype1>(new ConcretePrototype1(*this));
}

std::string ConcretePrototype1::getData() {
    return data;
}

void ConcretePrototype1::setData(std::string newData) {
    data = newData;
}
