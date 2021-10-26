//
// Created by barte on 10/20/2021.
//

#include "WheatDough.h"

float WheatDough::cost() const{
    float cost = 0;
    switch (size) {
        case small:
            cost += 4;
            break;
        case medium:
            cost += 6;
            break;
        case large:
            cost += 8;
            break;
    }
    return cost;
}

std::string WheatDough::description() const{
    std::string descr = "Wheat dough";
    switch (size) {
        case small:
            descr  += " small";
            break;
        case medium:
            descr  += " medium";
            break;
        case large:
            descr  += " large";
            break;
    }
    descr  += " pizza with";
    return descr;
}

int WheatDough::kcal() const{
    int kcal = 0;
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

int WheatDough::grams() const{
    int grams = 0;
    switch (size) {
        case small:
            grams += 200;
            break;
        case medium:
            grams += 350;
            break;
        case large:
            grams += 500;
            break;
    }
    return grams;
}
