// singleton.h
#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>
#include <mutex>
using namespace std;

// 单例 - 自动释放
class Singleton
{
public:
    static Singleton* getInstance();

private:
    Singleton() {}                   // 构造函数（被保护）

private:
    static Singleton *pSingletonM;  // 指向单例对象的指针
    static mutex mutexM;           // 锁

    // GC 机制
    class GC
    {
    public:
        ~GC()
        {
                                     // 可以在这里销毁所有的资源，例如：db 连接、文件句柄等
            if (pSingletonM != NULL) {
                cout << "Here destroy the pSingletonM..." << endl;
                delete pSingletonM;
                pSingletonM = NULL;
            }
        }
        static GC gc;                // 用于释放单例
    };
};

#endif //SINGLETON_H
