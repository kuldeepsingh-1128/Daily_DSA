#include<iostream>
using namespace std;

class base{
    public:
    virtual void print(){
        cout<<"base class"<<endl;
    }
};

class Derived:public base{
    public:
    void print(){
        cout<<"Derived class"<<endl;
    }
};


int main(){
    base *b=new Derived();
    b->print();

    delete b;
    return 0; 

}