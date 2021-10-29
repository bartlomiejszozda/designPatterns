//
// Created by barte on 10/29/2021.
//

#ifndef ABSTRACTFACTORY_ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_ABSTRACTFACTORY_H
#include "Product.h"
#include <memory>


class AbstractFactory {
public:
    virtual std::unique_ptr<Product> createProduct1() = 0;
    virtual std::unique_ptr<Product> createProduct2() = 0;
    virtual ~AbstractFactory() = default;
};

#endif //ABSTRACTFACTORY_ABSTRACTFACTORY_H
