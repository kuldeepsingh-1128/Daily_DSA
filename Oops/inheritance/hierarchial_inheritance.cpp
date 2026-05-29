#include<iostream>
using namespace std;

class animal{
    public:

    void eat(){
        cout<<"animal eats \n";
    }
};

class bird:public animal{
    public:
    void fly(){
        cout<<"birds can fly..\n";
    }
};

class fish:public animal{
    public:
    void swim(){
        cout<<"fish can swim\n";
    }
};

int main(){
    fish f;
    f.eat();
    f.swim();

    bird b;
    b.eat();
    b.fly();
}