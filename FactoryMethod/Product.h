#ifndef PRODUCT_H
#define PRODUCT_H
class Product{
public:
	Product();
	virtual ~Product()=0;	
        virtual void doSomething()=0;
};


class ConcreteProduct:public Product
{
public:
	ConcreteProduct();
	virtual ~ConcreteProduct();	
        virtual void doSomething();
};
#endif
