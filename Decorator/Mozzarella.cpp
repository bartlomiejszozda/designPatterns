//
// Created by barte on 10/20/2021.
//

#include "Mozzarella.h"

float Mozzarella::cost() const {
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

std::string Mozzarella::description() const {
    std::string descr = pizza.description();
    descr  += " mozarella,";
    return descr;
}

int Mozzarella::kcal() const {
    int kcal = pizza.kcal();
    switch (size) {
        case small:
            kcal += 400;
            break;
        case medium:
            kcal += 700;
            break;
        case large:
            kcal += 1000;
            break;
    }
    return kcal;
}

int Mozzarella::grams() const {
    int grams = pizza.grams();
    switch (size) {
        case small:
            grams += 100;
            break;
        case medium:
            grams += 175;
            break;
        case large:
            grams += 250;
            break;
    }
    return grams;
}

Mozzarella::Mozzarella(const Pizza &pizza) : ToppingDecorator(pizza) {}
