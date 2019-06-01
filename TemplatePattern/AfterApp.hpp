//
//  AfterApp.hpp
//  TemplateMethod
//
//  Created by g p on 2019/6/1.
//  Copyright © 2019 pg. All rights reserved.
//

#ifndef AfterApp_hpp
#define AfterApp_hpp
#include "AfterLib.hpp"
#include <stdio.h>
class NewApp : public NewLib{
public:
    NewApp();
    ~NewApp();
protected:
    virtual void step2();
    virtual void step4();
};
#endif /* AfterApp_hpp */
