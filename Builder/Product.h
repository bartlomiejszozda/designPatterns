//
// Created by barte on 10/26/2021.
//

#ifndef BUILDER_PRODUCT_H
#define BUILDER_PRODUCT_H
#include <memory>
#include <string>
#include <iostream>


class Product {
public:
    Product(int var1, int var2, int var3, int var4) : var1(var1), var2(var2), var3(var3), var4(var4) {}
    void printMe(){std::cout<<"var1: "<<var1<<" var2: "<<var2<<" var3: "<<var3<<" var4: "<<var4<<std::endl;}
private:
    int var1;
    int var2;
    int var3;
    int var4;
};

using uptr_Product = std::unique_ptr<Product>;


#endif //BUILDER_PRODUCT_H
