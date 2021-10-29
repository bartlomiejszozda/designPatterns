//
// Created by barte on 10/29/2021.
//

#ifndef ABSTRACTFACTORY_PRODUCT2FAMILY1_H
#define ABSTRACTFACTORY_PRODUCT2FAMILY1_H
#include "Product.h"


class Product2Family1:public Product {
public:
    std::string toString() override;
};


#endif //ABSTRACTFACTORY_PRODUCT2FAMILY1_H
