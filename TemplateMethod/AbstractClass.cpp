// AbstractClass.cpp: implementation of the AbstractClass class.
//
//////////////////////////////////////////////////////////////////////

#include "AbstractClass.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

AbstractClass::AbstractClass()
{

}

AbstractClass::~AbstractClass()
{

}


int main()
{
	AbstractClass* pA=new ConcreteClass();
	pA->TemplateMethod();

	delete pA;

	
	return 0;
}