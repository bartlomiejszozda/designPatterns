#include <iostream>
#include "AbstractFactory.h"
#include "FactoryFamily1.h"
#include "FactoryFamily2.h"
#include "Product.h"
void useProducts(std::unique_ptr<AbstractFactory>& factory){
    std::unique_ptr<Product> p1 = factory->createProduct1();
    std::cout<<""<<p1->toString()<<std::endl;
    std::unique_ptr<Product> p2 = factory->createProduct1();
    std::cout<<""<<p2->toString()<<std::endl;
}
int main() {
    std::unique_ptr<AbstractFactory> factory = std::make_unique<FactoryFamily1>();
    useProducts(factory);
    factory = std::make_unique<FactoryFamily2>();
    useProducts(factory);
    return 0;
}
