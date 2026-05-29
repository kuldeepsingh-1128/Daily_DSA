#include<iostream>
using namespace std;

class car{
    string name;
    string color;

    public:
    car(){
        cout<<"constructor without parameter called!!"<<endl;
    }
    car(string name,string color){
        cout<<"constructor is called"<<endl;
        this->name=name;
        this->color=color;
    }

    ~car(){
        cout<<"Distructor is called!!"<<endl;
    }

    void start(){
        cout<<color<<" "<<name<<" car is started!!!"<<endl;
    }

    void stop(){
        cout<<color<<" car is stop!!"<<endl;
    }
};

int main(){
    car c;                    //constructor without parameter
    car c1("Audi" ,"Black");  //constructor with parameter

    c1.start();
    c1.stop();
}