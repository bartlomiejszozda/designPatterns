#include <iostream>
#include "WheatDough.h"
#include "Mozzarella.h"
#include "Ham.h"

int main() {
//    Pizza pizza = WheatDough;
    const Pizza& pizza = Ham(Mozzarella(WheatDough()));
    std::cout<<pizza.description()<<std::endl;
    std::cout<<"cost: "<<pizza.cost()<<std::endl;
    std::cout<<"grams: "<<pizza.grams()<<std::endl;
    std::cout<<"kcal: "<<pizza.kcal()<<std::endl;
}
