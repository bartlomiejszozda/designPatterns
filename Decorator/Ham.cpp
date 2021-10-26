//
// Created by barte on 10/20/2021.
//

#include "Ham.h"

float Ham::cost() const {
    float cost = pizza.cost();
    switch (size) {
        case small:
            cost += 0.5;
            break;
        case medium:
            cost += 1.0;
            break;
        case large:
            cost += 1.5;
            break;
    }
    return cost;
}

std::string Ham::description() const {
    std::string descr = pizza.description();
    descr  += " ham,";
    return descr;
}

int Ham::kcal() const {
    int kcal = pizza.kcal();
    switch (size) {
        case small:
            kcal += 100;
            break;
        case medium:
            kcal += 150;
            break;
        case large:
            kcal += 200;
            break;
    }
    return kcal;
}

int Ham::grams() const {
    int grams = pizza.grams();
    switch (size) {
        case small:
            grams += 50;
            break;
        case medium:
            grams += 75;
            break;
        case large:
            grams += 100;
            break;
    }
    return grams;
}

Ham::Ham(const Pizza &pizza) : ToppingDecorator(pizza) {}