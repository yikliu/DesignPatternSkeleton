// Subject.h: interface for the Subject class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SUBJECT_H__9B881B16_BC22_41E5_95ED_B971EAAD427D__INCLUDED_)
#define AFX_SUBJECT_H__9B881B16_BC22_41E5_95ED_B971EAAD427D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <iostream>
#include <list>
#include <string>
using namespace std;

typedef string STATE;
class Observer;
class Subject  
{
public:
	Subject();
	virtual ~Subject();

	virtual void Attach(Observer* ob);
	virtual void Detach(Observer* ob);

	virtual void Notify();

	virtual void SetState(STATE st){m_strSubjectState=st;}
	virtual STATE GetState(){return m_strSubjectState;}
private:
	list <Observer*> _list_Observer;
	STATE m_strSubjectState;

};

class Observer{
public:
	Observer():m_strObserverState("Blank"){}
	virtual ~Observer(){}
	virtual void Update(Subject*)=0;
	virtual STATE GetObserverState()=0;
protected:
	STATE m_strObserverState;
};

class ConcreteSubject:public Subject
{
public:
	ConcreteSubject():Subject(){}
	virtual ~ConcreteSubject(){}


};


class ConcreteObserver:public Observer
{
public:
	ConcreteObserver(){}
	virtual ~ConcreteObserver(){}
	virtual void Update(Subject *);
	virtual STATE GetObserverState(){return m_strObserverState;}
	

};

#endif // !defined(AFX_SUBJECT_H__9B881B16_BC22_41E5_95ED_B971EAAD427D__INCLUDED_)
