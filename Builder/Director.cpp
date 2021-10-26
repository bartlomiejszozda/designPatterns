//
// Created by barte on 10/26/2021.
//

#include "Director.h"

void Director::makeProduct(int val1, int val2, int elementalVal3, int elementalVal4) {
    builder->setVar1(val1);
    builder->setVar2(val2);
    builder->calcVar3(elementalVal3);
    builder->calcVar4(elementalVal4);
}
