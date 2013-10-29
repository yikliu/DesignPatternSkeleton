// Implementor.h: interface for the Implementor class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_IMPLEMENTOR_H__02EFE8D5_5C67_4BB6_A0E3_1BB391AB08CF__INCLUDED_)
#define AFX_IMPLEMENTOR_H__02EFE8D5_5C67_4BB6_A0E3_1BB391AB08CF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <iostream>
using namespace std;
class Implementor  
{
protected:
	Implementor();
public:
	virtual ~Implementor()=0;
	virtual void OperationImp()=0;

};

class ConcreteImpletor:public Implementor
{
public:
	ConcreteImpletor(){}
	virtual ~ConcreteImpletor(){}
	virtual void OperationImp();
protected:
private:
};



#endif // !defined(AFX_IMPLEMENTOR_H__02EFE8D5_5C67_4BB6_A0E3_1BB391AB08CF__INCLUDED_)
