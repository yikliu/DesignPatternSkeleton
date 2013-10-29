// Decorator.h: interface for the Decorator class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DECORATOR_H__3B44C7F3_DC2B_47A6_A282_6C05F1A80E49__INCLUDED_)
#define AFX_DECORATOR_H__3B44C7F3_DC2B_47A6_A282_6C05F1A80E49__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Componet.h"

class Decorator : public Componet  
{
public:

	Decorator(Componet* com):_com(com){}
	virtual ~Decorator();
	virtual void Operation(){}
protected:
	Componet* _com;

};

#endif // !defined(AFX_DECORATOR_H__3B44C7F3_DC2B_47A6_A282_6C05F1A80E49__INCLUDED_)
