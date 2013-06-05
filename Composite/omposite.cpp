// omposite.cpp: implementation of the Composite class.
//
//////////////////////////////////////////////////////////////////////

#include "omposite.h"
#include <algorithm>
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Composite::Composite()
{

}

Composite::~Composite()
{	
	
}

void Composite::Add(Component* pChild)
{
	_vec_children.push_back(pChild);
}

void Composite::Remove(Component* pChild)
{
	vector<Component*>::iterator iter=find(_vec_children.begin(),_vec_children.end(),pChild);
	if(iter!=_vec_children.end())
	{
		_vec_children.erase(iter);
	}
}

Component* Composite::GetChild(int n_Index)
{
	if(n_Index<=0||n_Index>_vec_children.size())		
		return NULL;
	return _vec_children[n_Index-1];
	
	
}

void Composite::Operation()
{
	vector<Component*>::iterator it=_vec_children.begin();
	for(;it!=_vec_children.end();it++)
	{
		(*it)->Operation();
	}
}