// 
// File:   Director.h
// Author: il
//
// Created on 2008年9月1日, 上午11:36
//

#ifndef _DIRECTOR_H
#define	_DIRECTOR_H
#include "builder.h"
class Director{
public:
    Director();
    ~Director();
    void Construct(Builder& bld);
private: 
    
};


#endif	/* _DIRECTOR_H */

