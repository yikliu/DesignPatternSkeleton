/*
 * Creator.h
 *
 *  Created on: Jan 6, 2011
 *      Author: liuarthur
 */

#ifndef CREATOR_H_
#define CREATOR_H_
#include "Product.h"
class Creator{
public:
	Creator(){};
	virtual Product* MakeProduct(int i) = 0;
	virtual ~Creator(){};
};

#endif /* CREATOR_H_ */
