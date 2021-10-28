//
// Created by barte on 10/29/2021.
//

#ifndef FACTORYMETHOD_CONCRETEPRODUCT1CREATOR_H
#define FACTORYMETHOD_CONCRETEPRODUCT1CREATOR_H
#include "ProductCreator.h"
#include "ConcreteProduct1.h"


class ConcreteProduct1Creator: public ProductCreator {
public:
    std::unique_ptr<Product> createProduct() override;
};


#endif //FACTORYMETHOD_CONCRETEPRODUCT1CREATOR_H
