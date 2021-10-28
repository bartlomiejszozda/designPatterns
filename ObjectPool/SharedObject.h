//
// Created by barte on 10/28/2021.
//

#ifndef OBJECTPOOL_SHAREDOBJECT_H
#define OBJECTPOOL_SHAREDOBJECT_H
#include <iostream>


class SharedObject {
public:
    void print(){std::cout<<"SharedObject: "<<descr<<std::endl;};
//    SharedObject(){std::cout<<"Shared Object ctor"<<std::endl;};
    SharedObject(std::string descr): descr(descr){std::cout<<"Shared Object ctor"<<std::endl;};
    SharedObject(const SharedObject&){std::cout<<"Shared Object copy ctor"<<std::endl;};
    SharedObject& operator=(const SharedObject&){std::cout<<"Shared Object copy assignment"<<std::endl;};
    SharedObject(SharedObject&&){std::cout<<"Shared Object move ctor"<<std::endl;};
    SharedObject& operator=(SharedObject&&){std::cout<<"Shared Object move assignment"<<std::endl;};
    ~SharedObject() {std::cout<<"Shared Object deletion"<<std::endl;};
private:
    const std::string descr;
};


#endif //OBJECTPOOL_SHAREDOBJECT_H
