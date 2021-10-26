//
// Created by barte on 10/24/2021.
//
#include "Singleton_Lazy.h"
#include <iostream>
//Singleton_Lazy* Singleton_Lazy::instance;
Singleton_Lazy& Singleton_Lazy::getInstance() {
    if (instance == nullptr)
        instance.reset(new Singleton_Lazy);
//        instance = new Singleton_Lazy;
    return *instance;
};

Singleton_Lazy::~Singleton_Lazy() {
    std::cout<<"destructor"<<std::endl;
}
