/*
 * main.cpp
 *
 *  Created on: Jan 10, 2011
 *      Author: liuarthur
 */
#include<iostream>
#include "Creator.h"
#include "Product.h"
#include "ConcreteCreator.h"
#include "ConcreteProduct1.h"
#include "ConcreteProduct2.h"
int main(int argc, char**argv){
	ConcreteCreator * aCreator = new ConcreteCreator();
	Product * aProduct  = aCreator->MakeProduct(1);
	aProduct->printProduct();
	delete aProduct;
	aProduct = aCreator->MakeProduct(2);
	aProduct->printProduct();
	delete aProduct;
	delete aCreator;
	return 0;
}
