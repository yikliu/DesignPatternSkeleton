/*
 * ConcreteCreator.cpp
 *
 *  Created on: Jan 10, 2011
 *      Author: liuarthur
 */

#include "ConcreteCreator.h"

ConcreteCreator::ConcreteCreator(){}

ConcreteCreator::~ConcreteCreator(){}

Product * ConcreteCreator::MakeProduct(int i){
	switch (i){
	case 1: return new ConcreteProduct1();
	case 2: return new ConcreteProduct2();
	default:
		 return NULL;
	}
}
