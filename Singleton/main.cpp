#include <iostream>
#include "Singleton.h"

int main() {
    Singleton& s = Singleton::getInstance();
    s.methodA();
    return 0;
}
