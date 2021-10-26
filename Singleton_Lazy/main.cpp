#include <iostream>
#include "Singleton_Lazy.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Singleton_Lazy& sl = Singleton_Lazy::getInstance();
    return 0;
}
