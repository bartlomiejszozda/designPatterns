#include <iostream>
#include "Prototype.h"
#include "ConcretePrototype1.h"
#include "ConcretePrototype2.h"
void printValues(std::shared_ptr<Prototype>& p, std::shared_ptr<Prototype>& p2){
    std::cout<<"p.getData(): "<<p->getData()<<"  p2.getData(): "<<p2->getData()<<std::endl;
}

int main() {
    std::shared_ptr<Prototype> p1_1 = std::make_shared<ConcretePrototype1>();
    std::shared_ptr<Prototype> p1_2 = p1_1->clone();
    printValues(p1_1, p1_2);
    p1_2->setData("ConcretePrototype1 copied");
    printValues(p1_1, p1_2);

    std::shared_ptr<Prototype> p2_1 = std::make_shared<ConcretePrototype2>();
    std::shared_ptr<Prototype> p2_2 = p2_1->clone();
    p2_2->setData("ConcretePrototype2 copied");
    printValues(p2_1, p2_2);
    return 0;
}
