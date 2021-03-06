// Subject.cpp: implementation of the Subject class.
//
//////////////////////////////////////////////////////////////////////

#include "Subject.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

int main()
{
	Subject* sj=new RealSubject();
	Proxy*   p=new Proxy(sj);

	p->Request();
	delete p;

	return EXIT_SUCCESS;
}
