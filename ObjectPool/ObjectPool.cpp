//
// Created by barte on 10/28/2021.
//

#include "ObjectPool.h"

SharedObject_Ptr ObjectPool::acquireObject(const std::string& descr) {
    for (auto& so_ptr : objectPool){
            if ( so_ptr.use_count() == 1 ){
                return so_ptr;
            }
    }
    return emplaceNewObject(descr);
}

bool ObjectPool::releaseObject(SharedObject_Ptr& so_ptr) {
    auto iter = std::find(objectPool.begin(), objectPool.end(), so_ptr);
    if (iter != objectPool.end()){
        if (iter->use_count() != 2){
            std::cout<<"WARNING count should be 2"<<iter->use_count()<<std::endl;
        }
        so_ptr.reset();
        so_ptr.reset();
        if (iter->use_count() != 1){
            std::cout<<"WARNING count should be 1"<<iter->use_count()<<std::endl;
        }
        std::cout<<"object released properly"<<std::endl;
    }
    else
        std::cout<<"object NOT released properly"<<std::endl;
        return false;
}

SharedObject_Ptr& ObjectPool::emplaceNewObject(const std::string descr) {
    return objectPool.emplace_back(std::make_shared<SharedObject>(descr));
}
