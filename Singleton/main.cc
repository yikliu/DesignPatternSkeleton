// 
// File:   main.cc
// Author: il
//
// Created on 2008年9月1日, 上午11:02
//

#include <stdlib.h>
#include "Singleton.h"



//
// 
//
int main(int argc, char** argv) {
    Singleton* sg=Singleton::Instance();
    Singleton* sg2=Singleton::Instance();
    cout<<sg->getNum()<<endl;
    cout<<sg2->getNum()<<endl;
    sg->setNum(2);
    cout<<sg->getNum()<<endl;
     cout<<sg2->getNum()<<endl;
    
    return (EXIT_SUCCESS);
}

