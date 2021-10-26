#include <iostream>
#include "Prototype.h"
#include "ConcretePrototype1.h"
#include "ConcretePrototype2.h"
void printValues(Prototype* p, Prototype* p2){
    std::cout<<"p.getData(): "<<p->getData()<<"  p2.getData(): "<<p2->getData()<<std::endl;
}

int main() {
    Prototype* p1_1 = new ConcretePrototype1;
    Prototype* p1_2 = p1_1->clone();
    printValues(p1_1, p1_2);
    p1_2->setData("ConcretePrototype copied");
    printValues(p1_1, p1_2);

    Prototype* p2_1 = new ConcretePrototype2;
    Prototype* p2_2 = p2_1->clone();
    printValues(p2_1, p2_2);
    delete p1_1;
    delete p1_2;
    delete p2_1;
    delete p2_2;
    return 0;
}
