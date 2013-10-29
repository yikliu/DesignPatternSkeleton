// ConcreteDecorator.cpp: implementation of the ConcreteDecorator class.
//
//////////////////////////////////////////////////////////////////////

#include "ConcreteDecorator.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////


ConcreteDecorator::~ConcreteDecorator()
{

}

void ConcreteDecorator::AddBehavior()
{
	cout<<"Add Behavior"<<endl;
}


void ConcreteDecorator::Operation()
{
	_com->Operation();
	AddBehavior();
}