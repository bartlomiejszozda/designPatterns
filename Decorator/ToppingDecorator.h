//
// Created by barte on 10/20/2021.
//

#ifndef DECORATOR_TOPPINGDECORATOR_H
#define DECORATOR_TOPPINGDECORATOR_H
#include "Pizza.h"


class ToppingDecorator: public Pizza {
public:
    ToppingDecorator(const Pizza &pizza) : pizza(pizza) {}
    virtual float cost() const override = 0;
    virtual std::string description() const override = 0;
    virtual int kcal() const override = 0;
    virtual int grams() const override = 0;
protected:
    const Pizza& pizza;
};


#endif //DECORATOR_TOPPINGDECORATOR_H
