#ifndef FACTORY_H
#define FACTORY_H

#include "Product.h"

// 抽象工厂
class AFactory
{
public:
    virtual ~AFactory(){}
    virtual ICar* CreateCar() = 0;  // 生产汽车   
};

#endif // FACTORY_H
