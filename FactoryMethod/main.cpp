#include <iostream>
#include "Factory.h"

int main(int argc, char* argv[]){
	Factory * fac=new ConcreteFactory();
	Product * p=fac->CreateProduct();
        p->doSomething();
        delete p;
	delete fac;
	return 0;

}
