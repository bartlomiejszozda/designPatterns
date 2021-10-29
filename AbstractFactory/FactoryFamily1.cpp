//
// Created by barte on 10/29/2021.
//

#include "FactoryFamily1.h"

std::unique_ptr<Product> FactoryFamily1::createProduct1() {
    return std::make_unique<Product1Family1>();
}

std::unique_ptr<Product> FactoryFamily1::createProduct2() {
    return std::make_unique<Product2Family1>();
}

//FactoryFamily1::~FactoryFamily1() {
//
//}
