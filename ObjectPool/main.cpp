#include <iostream>
#include "ObjectPool.h"

int main() {
    ObjectPool op;
    SharedObject_Ptr so1 = op.acquireObject();

    SharedObject_Ptr so2 = op.acquireObject();

    op.releaseObject(so2);
    SharedObject_Ptr so3 = op.acquireObject();
    std::cout<<"-----------stack unwinding-----------"<<std::endl;
}
