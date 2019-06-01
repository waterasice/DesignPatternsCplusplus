//
//  BeforeApp.cpp
//  TemplateMethod
//
//  Created by g p on 2019/6/1.
//  Copyright © 2019 pg. All rights reserved.
//

#include "BeforeApp.hpp"
#include <iostream>
App::App(){}
App::~App(){}
void App::step2(){
    std::cout << "BeforeApp step2"<<std::endl;
}
void App::step4(){
    std::cout << "BeforeApp step4"<<std::endl;
}
