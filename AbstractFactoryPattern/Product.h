#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

using namespace std;

//CAR
class ICar
{
public:
    virtual ~ICar(){}
    virtual string Name() = 0;  // car name
};

//BIKE
class IBike
{
public:
    virtual ~IBike(){}
    virtual string Name() = 0;  // bike name
};

#endif // PRODUCT_H

