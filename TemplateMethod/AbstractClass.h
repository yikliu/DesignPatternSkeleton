// AbstractClass.h: interface for the AbstractClass class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ABSTRACTCLASS_H__0571EA58_AB4C_49FB_8467_4F4392C662AC__INCLUDED_)
#define AFX_ABSTRACTCLASS_H__0571EA58_AB4C_49FB_8467_4F4392C662AC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <iostream>
using namespace std;
class AbstractClass  
{
public:
	AbstractClass();
	virtual ~AbstractClass();

	void TemplateMethod(){PrimitiveOperation1();PrimitiveOperation2();}
	virtual void PrimitiveOperation1()=0;
	virtual void PrimitiveOperation2()=0;

};

class ConcreteClass:public AbstractClass
{
public:
	ConcreteClass(){}
	virtual ~ConcreteClass(){}

	virtual void PrimitiveOperation1(){cout<<"Primitive Operation 1"<<endl;}
	virtual void PrimitiveOperation2(){cout<<"Primitive Operation 2"<<endl;}
};

#endif // !defined(AFX_ABSTRACTCLASS_H__0571EA58_AB4C_49FB_8467_4F4392C662AC__INCLUDED_)
