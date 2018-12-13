#ifndef CONCRETE_FACTORY_H
#define CONCRETE_FACTORY_H

#include "Factory.h"
#include "ConcreteProduct.h"

// 奔驰工厂
class BenzFactory : public AFactory
{
public:
    ICar* CreateCar() 
    {
        return new BenzCar();
    }

};

class BmwFactory : public AFactory
{
public:
    ICar* CreateCar() 
    {
        return new BmwCar();
    }

};

class AudiFactory :public AFactory
{
public:
    ICar* CreateCar()
    {
        return new AudiCar();
    }

};

#endif
// CONCRETE_FACTORY_H

