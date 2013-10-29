#include "Component.h"
#include "omposite.h"
#include "Leaf.h"

int main()
{
	
	Composite cp,cp2;
	Leaf l11("11"),l12("12"),l13("13"),l21("21"),l22("22"),l23("23");
	cp.Add(&l11);
	cp.Add(&l12);
	cp.Add(&l13);

	cp2.Add(&l21);
	cp2.Add(&l22);
	cp2.Add(&l23);

	cp.Add(&cp2);

	cp.Operation();

	cp.Remove(&l12);
	cout<<"After remove L12"<<endl;
	cp.Operation();

	cp2.Remove(&l22);
	cout<<"After Remove L22"<<endl;
	cp.Operation();

	cout<<"Get Child of Index of 3"<<endl;
	Component* l=cp.GetChild(3);
	l->Operation();

	system("Pause");

	return 0;
}
