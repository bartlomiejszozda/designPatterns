#include <iostream>
#include "Target.h"
#include "Adapter.h"

#include "memory"

int main() {
    std::unique_ptr<Target> target = std::make_unique<Adapter>();
    std::cout<<"result: "<<target->calcSomething(3.5)<<std::endl;
}
