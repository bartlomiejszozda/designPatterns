//
// Created by barte on 10/26/2021.
//

#ifndef BUILDER_DIRECTOR_H
#define BUILDER_DIRECTOR_H
#include "Builder.h"


class Director {
public:
    Director(std::shared_ptr<Builder> builder): builder(builder) {}
    void makeProduct(int val1, int val2, int elementalVal3, int elementalVal4);
private:
    std::shared_ptr<Builder> builder;
};


#endif //BUILDER_DIRECTOR_H
