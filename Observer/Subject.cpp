// Subject.cpp: implementation of the Subject class.
//
//////////////////////////////////////////////////////////////////////

#include "Subject.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Subject::Subject()
{

}

Subject::~Subject()
{

}


void Subject::Attach(Observer* ob)
{
	_list_Observer.push_back(ob);
}

void Subject::Detach(Observer* ob)
{
	if (ob!=NULL) {
		_list_Observer.remove(ob);
	}
}

void Subject::Notify()
{
	list<Observer*>::iterator it=_list_Observer.begin();
	for (;it!=_list_Observer.end();it++)
	{
		(*it)->Update(this);
	}
}

void ConcreteObserver::Update(Subject* psub)
{
	if(psub!=NULL)
	{
		m_strObserverState=psub->GetState();
	}
}