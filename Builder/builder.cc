#include "builder.h"
Builder::~Builder(){

}

Builder::Builder(){
    
}
        

ConcreteBuilder::ConcreteBuilder(){
    m_pProduct=0;
}

ConcreteBuilder::~ConcreteBuilder(){
    cout<<"Concrete Builder is destructing"<<endl;
}
void ConcreteBuilder::BuildProduct(){
    m_pProduct=new Product();
}

void ConcreteBuilder::BuildPartA(string& str)
{
    m_pProduct->SetPartA(str);
}

void ConcreteBuilder::BuildPartB(string& str)
{
    m_pProduct->SetPartB(str);
}

