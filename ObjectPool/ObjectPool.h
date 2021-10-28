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
using SharedObject_Pair = std::pair<bool, std::shared_ptr<SharedObject>>;

class ObjectPool {
private:
    std::vector<SharedObject_Pair> objectPool;
    bool objectIsUsed(const SharedObject_Pair& sop);
    SharedObject_Pair& emplaceNewObject(const std::string descr);
public:
    SharedObject_Ptr acquireObject(const std::string& descr);
    bool releaseObject(SharedObject_Ptr&);
};


#endif //OBJECTPOOL_OBJECTPOOL_H
