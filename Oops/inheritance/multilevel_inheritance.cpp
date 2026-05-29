#include<iostream>
using namespace std;

class animal{
    public:
    void eat(){
        cout<<"eats...\n";
    }
};

class mammal :public animal{
    public:
    string bloodgroup="Warm";
};

class dog : public mammal{
    public:
    void tail(){
        cout<<"waveing tail...\n";
    }
};


int main(){
    dog d;
    d.eat();
    cout<<d.bloodgroup<<endl;
    d.tail();

}