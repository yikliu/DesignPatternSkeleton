#include <iostream>
#include "Product.h"
using namespace std;

Product::Product()
{
}

Product::~Product()
{
    cout<<"Product is destructing..."<<endl;
}

void Product::doSomething(){
    cout<<"Product can do anything!"<<endl;
    cout<<_partA<<" "<<_partB<<endl;
}
