//
//  AfterNewLib.cpp
//  TemplateMethod
//
//  Created by g p on 2019/6/1.
//  Copyright © 2019 pg. All rights reserved.
//

#include "AfterLib.hpp"
#include <iostream>

NewLib::NewLib(){}
NewLib::~NewLib(){}
void NewLib::run()
{
    step1();
    step2();
    step3();
    step4();
    step5();
    
}
void NewLib::step1(){
    std::cout << "NewLib step1"<<std::endl;
}
void NewLib::step3(){
    std::cout << "NewLib step3"<<std::endl;
}
void NewLib::step5(){
    std::cout << "NewLib step5"<<std::endl;
}
