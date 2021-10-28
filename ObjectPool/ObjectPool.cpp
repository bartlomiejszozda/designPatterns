//
// Created by barte on 10/28/2021.
//

#include "ObjectPool.h"

SharedObject_Ptr ObjectPool::acquireObject(const std::string& descr) {
    for (auto& so_pair : objectPool){
            if ( not objectIsUsed(so_pair) ){
                return so_pair.second;
            }
    }
    SharedObject_Pair& newPair = emplaceNewObject(descr);
    newPair.first = true;
    return newPair.second;
}

bool ObjectPool::releaseObject(SharedObject_Ptr& so_ptr) {
    auto iter = std::find_if(objectPool.begin(), objectPool.end(), [&so_ptr](const auto& el){return el.second == so_ptr;});
    if (iter != objectPool.end()){
        iter->first = false;
        so_ptr.reset();
        std::cout<<"object released properly"<<std::endl;
    }
    else
        std::cout<<"object NOT released properly"<<std::endl;
        return false;
}

bool ObjectPool::objectIsUsed(const SharedObject_Pair& so_pair) {
    return so_pair.first;
}

SharedObject_Pair& ObjectPool::emplaceNewObject(const std::string descr) {
    return objectPool.emplace_back(std::piecewise_construct,
                            std::forward_as_tuple(false),
                            std::forward_as_tuple(std::make_shared<SharedObject>(descr)));

}
