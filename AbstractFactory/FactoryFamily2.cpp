//
// Created by barte on 10/29/2021.
//

#include "FactoryFamily2.h"

std::unique_ptr<Product> FactoryFamily2::createProduct1() {
    return std::make_unique<Product1Family2>();
}

std::unique_ptr<Product> FactoryFamily2::createProduct2() {
    return std::make_unique<Product2Family2>();
}

FactoryFamily2::~FactoryFamily2() {

}
