/*
 * ConcreteCreator.h
 *
 *  Created on: Jan 6, 2011
 *      Author: liuarthur
 */

#ifndef CONCRETECREATOR_H_
#define CONCRETECREATOR_H_
#include "Creator.h"
#include "Product.h"
#include "ConcreteProduct1.h"
#include "ConcreteProduct2.h"

class ConcreteCreator : public Creator{
public:
	ConcreteCreator();
	Product* MakeProduct(int i);
	~ConcreteCreator();

};

#endif /* CONCRETECREATOR_H_ */
