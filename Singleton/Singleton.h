// 
// File:   Singleton.h
// Author: il
//
// Created on 2008年9月1日, 上午10:51
//

#ifndef _SINGLETON_H
#define	_SINGLETON_H
#include<iostream>
using namespace std;
class Singleton{
private:
    static Singleton* _instance;
    int num;
    Singleton();
public:
    static Singleton* Instance();
    void   setNum(int i){num=i;}
    int     getNum(){return num;}
    
};


#endif	/* _SINGLETON_H */

