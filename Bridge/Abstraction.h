// Abstraction.h: interface for the Abstraction class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ABSTRACTION_H__FB7455CF_26B2_4113_9689_3D1F4AF49EDF__INCLUDED_)
#define AFX_ABSTRACTION_H__FB7455CF_26B2_4113_9689_3D1F4AF49EDF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "Implementor.h"
class Abstraction  
{
public:
	Abstraction(Implementor * imp):m_pImp(imp){}
	virtual ~Abstraction();
	void Operation();
private:
	Implementor * m_pImp;
	
};

#endif // !defined(AFX_ABSTRACTION_H__FB7455CF_26B2_4113_9689_3D1F4AF49EDF__INCLUDED_)
