// SysA.cpp: implementation of the SysA class.
//
//////////////////////////////////////////////////////////////////////

#include "SysA.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Facade::Facade()
{
	pSA=new SysA();
	pSB=new SysB();
}

Facade::~Facade()
{
	delete pSB;
	delete pSA;
}

void Facade::OperationWrapper()
{
	pSA->Operation();
	pSB->Operation();
}

int main()
{
	Facade F;

	F.OperationWrapper();
	
	return EXIT_SUCCESS;
}