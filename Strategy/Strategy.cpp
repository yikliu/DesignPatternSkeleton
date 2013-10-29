// Strategy.cpp: implementation of the Strategy class.
//
//////////////////////////////////////////////////////////////////////

#include "Strategy.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Strategy::Strategy()
{

}

Strategy::~Strategy()
{

}

int main()
{
	

	Context* pCtx=new Context(new ConcreteStrategy());

	pCtx->DoAction();

	if(NULL!=pCtx)
		delete pCtx;
	
	return 0;
}
