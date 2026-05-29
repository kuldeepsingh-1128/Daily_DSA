#include<iostream>
using namespace std;

class animal{
    public:
    string color;

    void eat(){
        cout<<"eats..\n";
    }
    void breath(){
        cout<<"breaths..\n";
    }

};

class fish :public animal{
    public:
    int fins;

    void swim(){
        cout<<"swims..\n";
    }
};

int main(){
    fish f;
    f.eat();
    f.breath();
    f.swim();
}