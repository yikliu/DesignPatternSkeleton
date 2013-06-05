// SysA.h: interface for the SysA class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SYSA_H__A6D3A83D_ED83_474D_BADA_77DC322EFFC6__INCLUDED_)
#define AFX_SYSA_H__A6D3A83D_ED83_474D_BADA_77DC322EFFC6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <iostream>
using namespace std;
class SysA  
{
public:
	SysA(){}
	virtual ~SysA(){}
	void Operation(){cout<<"SysA Op"<<endl;}

};

class SysB  
{
public:
	SysB(){}
	virtual ~SysB(){}
	void Operation(){cout<<"SysB Op"<<endl;}

};

class Facade{
public:
	Facade();
	virtual ~Facade();
	void OperationWrapper();
private:
	SysA* pSA;
	SysB* pSB;
};

#endif // !defined(AFX_SYSA_H__A6D3A83D_ED83_474D_BADA_77DC322EFFC6__INCLUDED_)
