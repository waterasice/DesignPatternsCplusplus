#ifndef BUILDER_H
#define BUILDER_H

#include <iostream>

using namespace std;

class Builder
{
public:
    virtual void buildTitle()=0;
    virtual void buildContent()=0;
    virtual void buildEnding()=0;
  
};

class GoodArcticle:public Builder
{
public:
    virtual void buildTitle(){cout << "build good arcticle title"<<endl;}
    virtual void buildContent(){cout << "build good arcticle content"<<endl;}
    virtual void buildEnding(){cout << "build good arcticle ending"<<endl;}
    
};

class BadArcticle:public Builder
{
public:
    virtual void buildTitle(){cout << "build bad arcticle title"<<endl;}
    virtual void buildContent(){cout << "build bad arcticle content"<<endl;}
    virtual void buildEnding(){cout << "build bad arcticle ending"<<endl;}
    
};

class Director
{

private:
    Builder *m_pBuilder;
public:
    Director(Builder *Builder){ m_pBuilder = Builder;}
    void create()
    {
        m_pBuilder->buildTitle();
        m_pBuilder->buildContent();
        m_pBuilder->buildEnding();
    }
    
};
#endif