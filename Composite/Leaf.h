// Leaf.h: interface for the Leaf class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_LEAF_H__4742F2C9_CABA_48A6_882A_1474D3D817CF__INCLUDED_)
#define AFX_LEAF_H__4742F2C9_CABA_48A6_882A_1474D3D817CF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Component.h"
#include <string>
class Leaf : public Component  
{
public:
	Leaf(const string& str_id):_id(str_id){}
	virtual ~Leaf();

	virtual void Operation();
private:
	string _id;

};

#endif // !defined(AFX_LEAF_H__4742F2C9_CABA_48A6_882A_1474D3D817CF__INCLUDED_)
