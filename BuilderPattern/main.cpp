#include <iostream>
#include "Builder.h"
using namespace std;

int main(int argc, char *argv[])
{
    GoodArcticle goodArcticle;
    Director director(&goodArcticle);
    director.create();
    return 0;
}