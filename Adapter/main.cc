// 
// File:   main.cc
// Author: il
//
// Created on 2008年9月2日, 下午2:59
//

#include <stdlib.h>
#include "Target.h"
//
// 
//
int main(int argc, char** argv) {
    
    Adapter* adpter=new Adapter(new Adaptee());
    adpter->Request();
    
    delete adpter;
            
    return (EXIT_SUCCESS);
}

