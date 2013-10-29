// ConcreteComponet.h: interface for the ConcreteComponet class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_CONCRETECOMPONET_H__E7EEFF4B_2B4D_4603_866D_0A0903605718__INCLUDED_)
#define AFX_CONCRETECOMPONET_H__E7EEFF4B_2B4D_4603_866D_0A0903605718__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Componet.h"

class ConcreteComponet : public Componet  
{
public:
	ConcreteComponet();
	virtual ~ConcreteComponet();
	virtual void Operation();

};

#endif // !defined(AFX_CONCRETECOMPONET_H__E7EEFF4B_2B4D_4603_866D_0A0903605718__INCLUDED_)
