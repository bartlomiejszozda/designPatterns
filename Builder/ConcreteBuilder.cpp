//
// Created by barte on 10/26/2021.
//

#include "ConcreteBuilder.h"

uptr_Product ConcreteBuilder::getProduct() {
    return std::make_unique<Product>(var1, var2, var3, var4);
}

void ConcreteBuilder::setVar1(int val) {
    var1 = val;
}

void ConcreteBuilder::setVar2(int val) {
    var2 = val;
}

void ConcreteBuilder::calcVar3(int elementalVal) {
    var3 = elementalVal * elementalVal;
}

void ConcreteBuilder::calcVar4(int elementalVal) {
    var4 = elementalVal * 2;
}
