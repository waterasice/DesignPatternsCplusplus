//
//  BeforeLib.cpp
//  TemplateMethod
//
//  Created by g p on 2019/6/1.
//  Copyright © 2019 pg. All rights reserved.
//

#include "BeforeLib.hpp"
#include <iostream>

Lib::Lib(){}
Lib::~Lib(){}
void Lib::step1(){
    std::cout << "BeforeLib step1"<<std::endl;
}
void Lib::step3(){
    std::cout << "BeforeLib step3"<<std::endl;
}
void Lib::step5(){
    std::cout << "BeforeLib step5"<<std::endl;
}
