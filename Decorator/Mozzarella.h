//
// Created by barte on 10/20/2021.
//

#ifndef DECORATOR_MOZZARELLA_H
#define DECORATOR_MOZZARELLA_H
#include "ToppingDecorator.h"


class Mozzarella: public ToppingDecorator {
public:
    Mozzarella(const Pizza &pizza);
    float cost() const override;
    std::string description() const override;
    int kcal() const override;
    int grams() const override;
private:
};


#endif //DECORATOR_MOZZARELLA_H
