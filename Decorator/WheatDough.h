//
// Created by barte on 10/20/2021.
//

#ifndef DECORATOR_WHEATDOUGH_H
#define DECORATOR_WHEATDOUGH_H
#include "Pizza.h"


class WheatDough: public Pizza {
public:
    float cost() const override;
    std::string description() const override;
    int kcal() const override;
    int grams() const override;
};


#endif //DECORATOR_WHEATDOUGH_H
