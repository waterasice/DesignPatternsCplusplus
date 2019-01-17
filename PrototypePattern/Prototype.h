#ifndef PROTOTYPE_H
#define PROTOTYPE_H 

#include <iostream>
#include <string>
using namespace std;

class Prototype
{
public:

    Prototype();
    virtual ~Prototype();
    virtual Prototype* clonePrototype() = 0;  // 克隆
    virtual void showPrototype() = 0;  // 
    
};

class ConcreteType : public Prototype
{
public:
    ConcreteType(){};
    ConcreteType(string name);
    ~ConcreteType();

    // 拷贝构造函数
    ConcreteType(const ConcreteType &other);
    Prototype* clonePrototype();
    void showPrototype();

private:
    string m_strName;
};

#endif