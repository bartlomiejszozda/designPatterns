//
// Created by barte on 10/29/2021.
//

#ifndef ABSTRACTFACTORY_FACTORYFAMILY1_H
#define ABSTRACTFACTORY_FACTORYFAMILY1_H
#include "AbstractFactory.h"
#include "Product1Family1.h"
#include "Product2Family1.h"


class FactoryFamily1: public AbstractFactory {
public:
    std::unique_ptr<Product> createProduct1() override;
    std::unique_ptr<Product> createProduct2() override;
};


#endif //ABSTRACTFACTORY_FACTORYFAMILY1_H
