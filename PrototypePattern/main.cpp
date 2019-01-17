#include "Prototype.h"
#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

int main(int argc, char const *argv[])
{
       // 孙悟空
    Prototype *pPrototype = new ConcreteType("New type");

    // 克隆猴子猴孙
    Prototype *pPrototype1 = pPrototype->clonePrototype();
    Prototype *pPrototype2 = pPrototype1->clonePrototype();

    cout << "pPrototype1 -> showPrototype :"<<endl;
    pPrototype1->showPrototype();
    cout << "pPrototype2 -> showPrototype :"<<endl;
    pPrototype2->showPrototype();

    SAFE_DELETE(pPrototype1);
    SAFE_DELETE(pPrototype2);
    SAFE_DELETE(pPrototype);
    return 0;
}