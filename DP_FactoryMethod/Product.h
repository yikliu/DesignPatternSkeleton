/*
 * Product.h
 *
 *  Created on: Jan 6, 2011
 *      Author: liuarthur
 */

#ifndef PRODUCT_H_
#define PRODUCT_H_
#include <iostream>
using namespace std;

class Product{
public:
	Product(){}
	virtual void printProduct() = 0;
	virtual ~Product(){};
};

#endif /* PRODUCT_H_ */
