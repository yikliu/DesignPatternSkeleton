#include "Singleton.h"
Singleton* Singleton::_instance=0;
Singleton::Singleton():num(0){
    
    cout<<"Singleton is Constructing"<<endl;
    cout<<"Num is "<<num<<endl;
}
Singleton* Singleton::Instance()
{
    if(_instance==0)
        _instance= new Singleton();
    else
        cout<<"Only one instance can be instantialized!"<<endl;
    return _instance;
        
}
