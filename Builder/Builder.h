//
// Created by barte on 10/26/2021.
//

#ifndef BUILDER_BUILDER_H
#define BUILDER_BUILDER_H
#include <Product.h>

class Builder {
public:
    virtual ~Builder() = default;
    virtual uptr_Product getProduct() = 0;
    virtual void setVar1(int val) = 0;
    virtual void setVar2(int val) = 0;
    virtual void calcVar3(int elementalVal) = 0;
    virtual void calcVar4(int elementalVal) = 0;
};


#endif //BUILDER_BUILDER_H
