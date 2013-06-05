#include <iostream>
#include "Product.h"
using namespace std;

Product::Product()
{
}

Product::~Product()
{

}

ConcreteProduct::ConcreteProduct()
{
	cout<<"ConcreteProduct constructing"<<endl;
}

ConcreteProduct::~ConcreteProduct()
{
    cout<<"ConcreteProduct is destructing"<<endl;
}
void ConcreteProduct::doSomething()
{
    cout<<"ConcreteProduct is doing something"<<endl;
}
