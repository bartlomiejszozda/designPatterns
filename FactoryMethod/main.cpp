#include <iostream>
#include <memory>
#include "ProductCreator.h"
#include "ConcreteProduct1Creator.h"
#include "ConcreteProduct2Creator.h"
#include "Product.h"

int main() {
    std::unique_ptr<ProductCreator> pc = std::make_unique<ConcreteProduct1Creator>();
    std::unique_ptr<Product> p1 = pc->createProduct();
    pc = std::make_unique<ConcreteProduct2Creator>();
    std::unique_ptr<Product> p2 = pc->createProduct();
    return 0;
}
