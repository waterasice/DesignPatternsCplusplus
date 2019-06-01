//
//  main.cpp
//  TemplateMethod
//
//  Created by g p on 2019/6/1.
//  Copyright © 2019 pg. All rights reserved.
//

#include <iostream>
#include "BeforeApp.hpp"
#include "BeforeLib.hpp"
#include "AfterLib.hpp"
#include "AfterApp.hpp"
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Before Using Temppalte Method :"<<std::endl;
    Lib lib;
    App app;
    lib.step1();
    app.step2();
    lib.step3();
    app.step4();
    lib.step5();
    std::cout << "After Using Temppalte Method :"<<std::endl;
    NewLib * pLib = new NewApp();
    pLib->run();
    delete pLib;
    return 0;
}
