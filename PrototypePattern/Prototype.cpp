#include "Prototype.h"

Prototype::Prototype()
{

}

Prototype::~Prototype()
{

}
ConcreteType::ConcreteType(string name)
{
    m_strName = name; 
}

ConcreteType::~ConcreteType(){}


ConcreteType::ConcreteType(const ConcreteType &other) 
{
    m_strName = other.m_strName;
}

Prototype* ConcreteType:: clonePrototype()
{
    // 调用拷贝构造函数
    return new ConcreteType(*this);
}
void ConcreteType:: showPrototype()
{
    cout << m_strName << " show ConcreteType" << endl;
}