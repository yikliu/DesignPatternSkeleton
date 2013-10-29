// Strategy.h: interface for the Strategy class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_STRATEGY_H__153B02C4_C6E4_4A45_B379_546D89AD78AF__INCLUDED_)
#define AFX_STRATEGY_H__153B02C4_C6E4_4A45_B379_546D89AD78AF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <iostream>
using namespace std;
class Strategy  
{
public:
	Strategy();
	virtual ~Strategy();

	virtual void AlgorithmInterface()=0;
};

class ConcreteStrategy:public Strategy
{
public:
	ConcreteStrategy(){}
	virtual ~ConcreteStrategy(){}

	virtual void AlgorithmInterface(){cout<<"Algorithm by ConcreteStrategy"<<endl;}
};

class Context
{
public:
	Context(Strategy* pstg):_stg(pstg){}
	virtual ~Context(){
		if (!_stg) 
		{
			delete _stg; 
			_stg=NULL;
		}
	}
	void DoAction(){_stg->AlgorithmInterface();}
private :
	Strategy* _stg;
};

#endif // !defined(AFX_STRATEGY_H__153B02C4_C6E4_4A45_B379_546D89AD78AF__INCLUDED_)
