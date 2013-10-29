// Componet.h: interface for the Componet class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_COMPONET_H__A6032AE2_4981_40CE_A443_D456907ECEE4__INCLUDED_)
#define AFX_COMPONET_H__A6032AE2_4981_40CE_A443_D456907ECEE4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <iostream>
using namespace std;
class Componet  
{
public:
	Componet(){}
	virtual ~Componet(){}
	virtual void Operation()=0;
};

#endif // !defined(AFX_COMPONET_H__A6032AE2_4981_40CE_A443_D456907ECEE4__INCLUDED_)
