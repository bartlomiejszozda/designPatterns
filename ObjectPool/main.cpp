#include <iostream>
#include "ObjectPool.h"

int main() {
    ObjectPool op;
    SharedObject_Ptr so1 = op.acquireObject("object 1");
    so1->print();

    SharedObject_Ptr so2 = op.acquireObject("object 2");
    so2->print();

    op.releaseObject(so2);
    SharedObject_Ptr so3 = op.acquireObject("object 3");
    so3->print();
    std::cout<<"-----------stack unwinding-----------"<<std::endl;
}
