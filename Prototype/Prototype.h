// 
// File:   Prototype.h
// Author: il
//
// Created on 2008年9月2日, 上午9:29
//

#ifndef _PROTOTYPE_H
#define	_PROTOTYPE_H
#include <iostream>
using namespace std;
class Prototype{
public:
    virtual ~Prototype(){}
    virtual Prototype* Clone()=0;
protected:
    Prototype(){}
private:
};

class ConcretePrototype:public Prototype{
public: 
    ConcretePrototype();
    ~ConcretePrototype();
    ConcretePrototype(const ConcretePrototype& cpt);
    Prototype * Clone();
private:
protected:
};


#endif	/* _PROTOTYPE_H */

