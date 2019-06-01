//
//  AfterApp.cpp
//  TemplateMethod
//
//  Created by g p on 2019/6/1.
//  Copyright © 2019 pg. All rights reserved.
//

#include "AfterApp.hpp"
#include <iostream>
NewApp ::NewApp(){}
NewApp ::~NewApp(){}

void NewApp :: step2(){
    std::cout<< " NewApp stpe2 "<<std::endl;
}

void NewApp :: step4(){
    std::cout<< " NewApp stpe4 "<<std::endl;
}

