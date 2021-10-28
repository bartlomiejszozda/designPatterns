//
// Created by barte on 10/29/2021.
//

#include "ConcreteProduct1Creator.h"

std::unique_ptr<Product> ConcreteProduct1Creator::createProduct() {
    return std::make_unique<ConcreteProduct1>();
}
