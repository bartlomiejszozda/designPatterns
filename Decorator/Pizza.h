//
// Created by barte on 10/20/2021.
//

#ifndef DECORATOR_PIZZA_H
#define DECORATOR_PIZZA_H
#include <string>


class Pizza {
public:
    enum Size {small, medium, large};
    virtual float cost() const = 0;
    virtual std::string description() const = 0;
    virtual int kcal() const = 0;
    virtual int grams() const = 0;
protected:
    Size size = medium;
};


#endif //DECORATOR_PIZZA_H
