//
// Created by barte on 10/29/2021.
//

#ifndef FACTORYMETHOD_CONCRETEPRODUCT2CREATOR_H
#define FACTORYMETHOD_CONCRETEPRODUCT2CREATOR_H
#include "ProductCreator.h"
#include "ConcreteProduct2.h"

class ConcreteProduct2Creator: public ProductCreator {
public:
    std::unique_ptr<Product> createProduct() override;

};


#endif //FACTORYMETHOD_CONCRETEPRODUCT2CREATOR_H
