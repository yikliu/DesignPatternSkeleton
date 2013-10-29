// Flyweight.cpp: implementation of the Flyweight class.
//
//////////////////////////////////////////////////////////////////////

#include "Flyweight.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////





void ConcreteFlyweight::Operation(const string& extrinistState){
	cout<<"Intrinist State"<<GetIntriniscState()<<endl;
	cout<<"Extrinist State"<<extrinistState<<endl;
	
}

Flyweight* FlyWeightFactory::GetFlyweight(const string& key)
{
	list<Flyweight*>::iterator it=_list_Flyweights.begin();
	for (;it!=_list_Flyweights.end();it++) {
		if((*it)->GetIntriniscState()==key)
		{
			return *it;
		}
	}

	Flyweight* pfw=new ConcreteFlyweight(key);
	_list_Flyweights.push_back(pfw);

	return pfw;

}