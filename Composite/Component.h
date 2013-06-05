// omponent.h: interface for the Component class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_OMPONENT_H__001BFCF5_BF06_4AA9_8CDE_0C2ECA09FFB1__INCLUDED_)
#define AFX_OMPONENT_H__001BFCF5_BF06_4AA9_8CDE_0C2ECA09FFB1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <iostream>
using namespace std;
class Component  
{
public:
	Component();
	virtual ~Component();

	virtual void        Operation()=0;
	virtual void        Add(Component*){}
	virtual void        Remove(Component*){}
	virtual Component*  GetChild(){return NULL;}

};

#endif // !defined(AFX_OMPONENT_H__001BFCF5_BF06_4AA9_8CDE_0C2ECA09FFB1__INCLUDED_)
