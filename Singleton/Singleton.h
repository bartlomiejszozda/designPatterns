//
// Created by barte on 10/24/2021.
//

#ifndef SINGLETON_SINGLETON_H
#define SINGLETON_SINGLETON_H


class Singleton {
public:
    static Singleton& getInstance();
    void methodA();
    Singleton(const Singleton&) = delete;
    Singleton& operator = (const Singleton&) = delete;
private:
    Singleton() = default;
    static Singleton uniqueInstance;
};


#endif //SINGLETON_SINGLETON_H
