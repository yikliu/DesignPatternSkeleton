#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
using namespace std;
class Product{
public:
	Product();
	 ~Product();
         void doSomething();
         void SetPartA(string str){_partA=str;}
         void SetPartB(string str){_partB=str;}
private:
        string _partA;
        string _partB;
};



#endif
