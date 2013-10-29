#include "Componet.h"
#include "Decorator.h"
#include "ConcreteComponet.h"
#include "ConcreteDecorator.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	Componet* cp=new ConcreteComponet();

	Decorator* dct=new ConcreteDecorator(cp);

	dct->Operation();

	delete dct;
	
	return EXIT_SUCCESS;
}
