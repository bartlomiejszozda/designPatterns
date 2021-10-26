//
// Created by barte on 10/24/2021.
//

#ifndef SINGLETON_LAZY_SINGLETON_LAZY_H
#define SINGLETON_LAZY_SINGLETON_LAZY_H


#include <memory>

class Singleton_Lazy {
public:
    void methodA();
    static Singleton_Lazy& getInstance();
    ~Singleton_Lazy();
private:
//    Singleton_Lazy() {
//        atexit([](){
//            delete instance;
//        });
//    };
    Singleton_Lazy() = default;
    Singleton_Lazy(const Singleton_Lazy&) = delete;
    Singleton_Lazy& operator=(const Singleton_Lazy&) = delete;
//    static Singleton_Lazy* instance;
    inline static std::unique_ptr<Singleton_Lazy> instance;
};


#endif //SINGLETON_LAZY_SINGLETON_LAZY_H
