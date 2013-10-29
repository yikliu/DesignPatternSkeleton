#include "Subject.h"
#include <iostream>
using namespace std;

int main()
{
	Observer* pob1=new ConcreteObserver();
	Observer* pob2=new ConcreteObserver();

	Subject* psub=new ConcreteSubject();

	psub->Attach(pob1);
	psub->Attach(pob2);

	cout<<"Observer State"<<pob1->GetObserverState()<<endl;
	cout<<"Observer State"<<pob2->GetObserverState()<<endl;
	psub->SetState("State1");

	psub->Notify();

	cout<<"Observer State"<<pob1->GetObserverState()<<endl;
	cout<<"Observer State"<<pob2->GetObserverState()<<endl;



	
	return 0;
}