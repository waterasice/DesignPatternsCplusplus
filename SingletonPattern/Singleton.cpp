#include "Singleton.h"

Singleton *Singleton::pSingletonM = NULL;
mutex Singleton::mutexM;

Singleton *Singleton::getInstance()
{
    if (pSingletonM == NULL)
    {
        std::lock_guard<std::mutex> lock(mutexM);  // 自解锁
        pSingletonM = new Singleton();
        return pSingletonM;
    }
    else
    {
        cout << "Instance is exists!!!" <<endl;
        return NULL;
    }
}