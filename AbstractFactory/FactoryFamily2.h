//
// Created by barte on 10/29/2021.
//

#ifndef ABSTRACTFACTORY_FACTORYFAMILY2_H
#define ABSTRACTFACTORY_FACTORYFAMILY2_H
#include "AbstractFactory.h"
#include "Product1Family2.h"
#include "Product2Family2.h"


class FactoryFamily2:public AbstractFactory {
public:
    std::unique_ptr<Product> createProduct1() override;
    std::unique_ptr<Product> createProduct2() override;

    virtual ~FactoryFamily2();
};


#endif //ABSTRACTFACTORY_FACTORYFAMILY2_H
