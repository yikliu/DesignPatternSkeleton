#include "Abstraction.h"

int main(int argc, char** argv)
{
	Abstraction* at=new Abstraction(new ConcreteImpletor());
	at->Operation();
	delete at;
	
	
	return 0;
}
