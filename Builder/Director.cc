#include "Director.h"
Director::Director(){
    cout<<"Director is constructing..."<<endl;
}
Director::~Director(){ 
        cout<<"Director is destructing..."<<endl;   
}

void Director::Construct(Builder& bld)
{
    string strA("Part A");
    string strB("Part B");
    bld.BuildProduct();
    bld.BuildPartA(strA);
    bld.BuildPartB(strB);    
    return;
}
