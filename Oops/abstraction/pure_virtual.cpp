#include<iostream>
using namespace std;

class shape{
    public:
    virtual void drow()=0;  //abstract fux,pure virtual fux
};

class circle:public shape{
    public:
    void drow(){
        cout<<"drow circle \n";
    }
};

class squre:public shape{
    public:
    void drow(){
        cout<<"drow squre \n";
    }
};



int main(){
    circle c1;
    c1.drow();
    
    squre s1;
    s1.drow();

}