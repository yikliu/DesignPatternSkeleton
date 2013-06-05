/*
 * ConcreteProduct.h
 *
 *  Created on: Jan 6, 2011
 *      Author: liuarthur
 */

#ifndef CONCRETEPRODUCT1_H_
#define CONCRETEPRODUCT1_H_
#include "Product.h"
#include <iostream>
using namespace std;
class ConcreteProduct1: public Product {
public:
	ConcreteProduct1();
	void printProduct();
};


#endif /* CONCRETEPRODUCT_H_ */
