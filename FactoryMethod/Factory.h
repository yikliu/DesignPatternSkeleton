#include "Product.h"
class Factory{
protected:
	Factory();
public: 
	virtual Product * CreateProduct()=0;
	virtual ~Factory()=0;
};

class ConcreteFactory:public Factory{
	
public:
	Product* CreateProduct();
	~ConcreteFactory();
        ConcreteFactory();
};
