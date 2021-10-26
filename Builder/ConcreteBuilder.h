//
// Created by barte on 10/26/2021.
//

#ifndef BUILDER_CONCRETEBUILDER_H
#define BUILDER_CONCRETEBUILDER_H
#include "Builder.h"


class ConcreteBuilder: public Builder {
public:
    uptr_Product getProduct() override;
    virtual void setVar1(int val) override;
    virtual void setVar2(int val) override;
    virtual void calcVar3(int elementalVal) override;
    virtual void calcVar4(int elementalVal) override;
private:
    int var1;
    int var2;
    int var3;
    int var4;
};


#endif //BUILDER_CONCRETEBUILDER_H
