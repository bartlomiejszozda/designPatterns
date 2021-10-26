//
// Created by barte on 10/24/2021.
//

#include "Singleton.h"
Singleton Singleton::uniqueInstance;
Singleton& Singleton::getInstance() {
    return uniqueInstance;
}
void Singleton::methodA() {
}