/* 
 * File:   main.c
 * Author: il
 *
 * Created on 2008年9月2日, 上午10:50
 */

#include <iostream>
#include "Prototype.h"
using namespace std;
/*
 * 
 */
int main(int argc, char** argv) {
    Prototype* p1=new ConcretePrototype();
    Prototype* p2=p1->Clone();
    delete p2;
    delete p1;
    return (EXIT_SUCCESS);
}

