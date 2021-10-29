//
// Created by barte on 10/29/2021.
//

#ifndef ABSTRACTFACTORY_PRODUCT_H
#define ABSTRACTFACTORY_PRODUCT_H
#include <string>


class Product {
public:
    virtual std::string toString() = 0;
    virtual ~Product() = default;
};


#endif //ABSTRACTFACTORY_PRODUCT_H
