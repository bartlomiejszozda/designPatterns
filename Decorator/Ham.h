//
// Created by barte on 10/20/2021.
//

#ifndef DECORATOR_HAM_H
#define DECORATOR_HAM_H
#include "ToppingDecorator.h"


class Ham:public ToppingDecorator {
public:
    Ham(const Pizza &pizza);
    float cost() const override;
    std::string description() const override;
    int kcal() const override;
    int grams() const override;
private:
};


#endif //DECORATOR_HAM_H
