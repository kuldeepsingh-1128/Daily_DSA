#include<iostream>
using namespace std;

class car{
    public:
    string name;
    string color;

    car(string name,string color){
        this->name=name;
        this->color=color;
    }

    car(car &NewCar){
        cout<<"copying from orignal to new..."<<endl;
        name=NewCar.name;
        color=NewCar.color;
    }

};

int main(){
    car c1("Audi" ,"Black"); 
    // car c2(c1);             // direct copy    
    // cout<<c2.name<<endl;
    // cout<<c2.color<<endl;

    car c2(c1);           //costmize copy constructor 
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;


}