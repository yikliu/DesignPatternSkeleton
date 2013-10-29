// Subject.h: interface for the Subject class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SUBJECT_H__4A085108_ABF2_4201_8D68_1845D462B8C3__INCLUDED_)
#define AFX_SUBJECT_H__4A085108_ABF2_4201_8D68_1845D462B8C3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <iostream>
using namespace std;
class Subject  
{
public:
	Subject(){}
	virtual ~Subject(){}
	virtual void Request()=0;
};

class RealSubject:public Subject
{
public:
	RealSubject(){}
	virtual ~RealSubject(){}
	virtual void Request(){cout<<"RealSubject Request"<<endl;}
};

class Proxy:public Subject
{
public:
	Proxy():_sub(NULL){}
	Proxy(Subject* psub):_sub(psub){}
	virtual ~Proxy(){delete _sub;_sub=NULL;}
	virtual void Request(){_sub->Request();}
	
private:
	Subject* _sub;
};

#endif // !defined(AFX_SUBJECT_H__4A085108_ABF2_4201_8D68_1845D462B8C3__INCLUDED_)
