// ConcreteDecorator.h: interface for the ConcreteDecorator class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_CONCRETEDECORATOR_H__3D9810F9_7532_4D3E_AF6D_FEED13528C55__INCLUDED_)
#define AFX_CONCRETEDECORATOR_H__3D9810F9_7532_4D3E_AF6D_FEED13528C55__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Decorator.h"

class ConcreteDecorator : public Decorator  
{
public:
	ConcreteDecorator(Componet* com):Decorator(com){}
	virtual ~ConcreteDecorator();
	virtual void Operation();
	void AddBehavior();

};

#endif // !defined(AFX_CONCRETEDECORATOR_H__3D9810F9_7532_4D3E_AF6D_FEED13528C55__INCLUDED_)
