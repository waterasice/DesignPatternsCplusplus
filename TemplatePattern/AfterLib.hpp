//
//  AfterLib.hpp
//  TemplateMethod
//
//  Created by g p on 2019/6/1.
//  Copyright © 2019 pg. All rights reserved.
//

#ifndef AfterLib_hpp
#define AfterLib_hpp

#include <stdio.h>
class NewLib{
public:
    NewLib();
    virtual ~NewLib();
    void run(); // Template Method
protected:
    void step1();
    void step3();
    void step5();
    virtual void step2() = 0;
    virtual void step4() = 0;
    
};
#endif /* AfterLib_hpp */
