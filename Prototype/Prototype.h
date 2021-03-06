//
// Created by barte on 10/26/2021.
//

#ifndef PROTOTYPE_PROTOTYPE_H
#define PROTOTYPE_PROTOTYPE_H
#include "string"
#include "memory"

class Prototype {
public:
    explicit Prototype() = default;
    virtual std::shared_ptr<Prototype> clone() = 0;
    virtual ~Prototype() = default;
    virtual std::string getData() = 0;
    virtual void setData(std::string newData) = 0;
protected:
    std::string data = "Prototype";
};


#endif //PROTOTYPE_PROTOTYPE_H
