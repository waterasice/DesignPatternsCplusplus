#include "Singleton.h"
#include <iostream>

using namespace std;

Singleton::GC Singleton::GC::gc; // important

int main()
{
    cout << "--------------getInstance first--------------"<<endl;
    if(Singleton::getInstance())
    {
        cout << "------------getInstance first successfuly---"<<endl;
    }
    else
    {
        cout << "------------getInstance first----failed------"<<endl;
    }

    cout << "***********************************************"<<endl;

    cout << "------------getInstance second-------------"<<endl;
    if(Singleton::getInstance())
    {
        cout << "------------getInstance second successfuly------"<<endl;
    }
    else
    {
        cout << "------------getInstance second failed------"<<endl;
    }
    
    cout << "***********************************************"<<endl;

    return 0;   

}