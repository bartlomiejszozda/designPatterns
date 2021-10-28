//
// Created by barte on 10/29/2021.
//

#ifndef FACTORYMETHOD_PRODUCTCREATOR_H
#define FACTORYMETHOD_PRODUCTCREATOR_H
#include <memory>
#include "Product.h"

class ProductCreator {
public:
    virtual std::unique_ptr<Product> createProduct() = 0;
};


#endif //FACTORYMETHOD_PRODUCTCREATOR_H
