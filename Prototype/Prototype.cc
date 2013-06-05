#include "Prototype.h"
ConcretePrototype::ConcretePrototype(){
    cout<<"ConcretePrototype Default Constructor"<<endl;
}

ConcretePrototype::~ConcretePrototype(){
    cout<<"ConcretePrototype Destructor"<<endl;
}

ConcretePrototype::ConcretePrototype(const ConcretePrototype& cpt){
    cout<<"ConcretePrototype Copy Constructor"<<endl;
}

Prototype* ConcretePrototype::Clone(){
    return new ConcretePrototype(*this);
}
