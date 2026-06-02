#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"constructor A is calling...\n";
    }
    ~A(){
        cout<<"distructor A is calling...\n";
    }
};

class B:public A{
    public:
    B(){
        cout<<"constructor B is calling...\n";
    }
    ~B(){
        cout<<"distructor B is calling...\n";
    }
};


int main(){
    B obj;

}