// Flyweight.h: interface for the Flyweight class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_FLYWEIGHT_H__651C3E79_4A09_474E_8489_EB6BC614163F__INCLUDED_)
#define AFX_FLYWEIGHT_H__651C3E79_4A09_474E_8489_EB6BC614163F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <string>
#include <list>
#include <iostream>
using namespace std;
class Flyweight  
{
public:	
	virtual  ~Flyweight(){}
	virtual  void Operation(const string& extrinistState)=0;
	string	 GetIntriniscState(){return _intrinisc_state;}
protected:
	Flyweight(const string& str_state):_intrinisc_state(str_state){}
private:
	string _intrinisc_state;

};

class ConcreteFlyweight:public Flyweight
{
public:
	ConcreteFlyweight(const string& str_state):Flyweight(str_state){}
	virtual ~ConcreteFlyweight(){}
	virtual  void Operation(const string& extrinistState);

protected:
private:
};

class FlyWeightFactory
{
public:
	FlyWeightFactory(){}
	~FlyWeightFactory(){}
	Flyweight* GetFlyweight(const string& key);
private:
	list<Flyweight*> _list_Flyweights;
};

#endif // !defined(AFX_FLYWEIGHT_H__651C3E79_4A09_474E_8489_EB6BC614163F__INCLUDED_)
