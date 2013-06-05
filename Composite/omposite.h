// omposite.h: interface for the Composite class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_OMPOSITE_H__DE5C1104_EE97_463F_9415_467E60AF5DE9__INCLUDED_)
#define AFX_OMPOSITE_H__DE5C1104_EE97_463F_9415_467E60AF5DE9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Component.h"
#include <vector>
class Composite : public Component  
{
public:
	Composite();
	virtual ~Composite();

	virtual void Add(Component*);
	virtual void Remove(Component*);
	virtual Component* GetChild(int);
	virtual void Operation();

private:
	vector<Component* > _vec_children;

};

#endif // !defined(AFX_OMPOSITE_H__DE5C1104_EE97_463F_9415_467E60AF5DE9__INCLUDED_)
