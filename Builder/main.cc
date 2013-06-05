// 
// File:   main.cc
// Author: il
//
// Created on 2008年9月1日, 下午8:52
//

#include <stdlib.h>
#include "Director.h"
#include "Product.h"
#include "builder.h"
//
// 
//
int main(int argc, char** argv) {
    Product * p;
    ConcreteBuilder cb;
    Director d;
    d.Construct(cb);
    p=cb.GetProduct();
    p->doSomething();    

    return (EXIT_SUCCESS);
}

