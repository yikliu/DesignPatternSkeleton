// 
// File:   Target.h
// Author: il
//
// Created on 2008年9月2日, 下午2:49
//

#ifndef _TARGET_H
#define	_TARGET_H
#include <iostream>
using namespace std;
class Target{
public:
    Target(){}
    virtual ~Target(){}
    virtual void Request()=0;
};

class Adaptee{
public:
    Adaptee(){}
    ~Adaptee(){}
    void SpecificRequest(){cout<<"Adpatee->SpecificRequest() is called"<<endl;}
};

class Adapter:public Target{
public:    
    Adapter(Adaptee* adptee):m_pAdaptee(adptee){}
    virtual ~Adapter(){delete m_pAdaptee; m_pAdaptee=NULL;}
    virtual void Request(){m_pAdaptee->SpecificRequest(); }
private:
    Adaptee* m_pAdaptee;    
};


#endif	/* _TARGET_H */

