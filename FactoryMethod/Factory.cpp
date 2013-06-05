#include "Product.h"
#include "Factory.h"
#include <iostream>
using namespace std;
Factory::Factory()
{
}

Factory::~Factory(){}
ConcreteFactory::~ConcreteFactory()
{
    cout<<"ConcreteFactory is destructing"<<endl;
}
ConcreteFactory::ConcreteFactory()
{
    cout<<"ConcreteFactory Construcing"<<endl;
}

Product* ConcreteFactory::CreateProduct()
{
    return new ConcreteProduct();
}



