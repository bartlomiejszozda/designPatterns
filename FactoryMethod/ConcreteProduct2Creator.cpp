//
// Created by barte on 10/29/2021.
//

#include "ConcreteProduct2Creator.h"

std::unique_ptr<Product> ConcreteProduct2Creator::createProduct() {
    return std::make_unique<ConcreteProduct2>();
}
