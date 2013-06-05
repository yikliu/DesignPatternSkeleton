// 
// File:   builder.h
// Author: il
//
// Created on 2008年9月1日, 上午11:22
//

#ifndef _BUILDER_H
#define	_BUILDER_H
#include <iostream>
#include <string>
#include "Product.h"
using namespace std;
class Builder {
public:    
    virtual ~Builder();
    virtual void BuildProduct()=0;
    virtual void BuildPartA(string& str)=0;
    virtual void BuildPartB(string& str)=0; 
    virtual Product* GetProduct()=0;
protected:
    Builder();
};

class   ConcreteBuilder:public Builder{
public:
    ConcreteBuilder();
    ~ConcreteBuilder();
    void BuildProduct();
    void BuildPartA(string& str);
    void BuildPartB(string& str);
    Product* GetProduct() {return m_pProduct;}
private:
    Product* m_pProduct;
};


#endif	/* _BUILDER_H */

