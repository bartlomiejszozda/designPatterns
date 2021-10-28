//
// Created by barte on 10/28/2021.
//

#ifndef OBJECTPOOL_OBJECTPOOL_H
#define OBJECTPOOL_OBJECTPOOL_H
#include <vector>
#include <string>
#include <memory>
#include <algorithm>
#include "SharedObject.h"
using SharedObject_Ptr = std::shared_ptr<SharedObject>;

class ObjectPool {
private:
    std::vector<SharedObject_Ptr> objectPool;
    SharedObject_Ptr& emplaceNewObject();
public:
    SharedObject_Ptr acquireObject();
    bool releaseObject(SharedObject_Ptr&);
};


#endif //OBJECTPOOL_OBJECTPOOL_H
