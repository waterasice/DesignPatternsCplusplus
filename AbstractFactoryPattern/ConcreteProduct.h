#ifndef CONCRETE_PRODUCT_H
#define CONCRETE_PRODUCT_H

#include "Product.h"

/********** car **********/
class BenzCar : public ICar
{
public:
    string Name()
    {
        return "Benz Car";
    }
};

class BmwCar : public ICar
{
public:
    string Name() 
    {
        return "Bmw Car";
    }
};

class AudiCar : public ICar
{
public: 
    std::string Name() 
    {
        return "Audi Car";
    }
};

/********** bike **********/
class BenzBike : public IBike
{
public:
    string Name()
    {
        return "Benz Bike";
    }
};

class BmwBike : public IBike
{
public:
    string Name()
    {
        return   "Bmw Bike";
    }
};

class AudiBike: public IBike
{   
public:               
    string  Name()
    {
    return "Audi Bike";
    }
};

#endif
