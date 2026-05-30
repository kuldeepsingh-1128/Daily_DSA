#include<iostream>
using namespace std;

class parents{
    public:
    virtual void hello(){
        cout<<"parents hello..";
    }
};

class child{
    public:
    void hello(){
        cout<<"child hello..";
    }
};

int main(){
    child child1;
    parents *ptr;
    ptr = &child1;
}