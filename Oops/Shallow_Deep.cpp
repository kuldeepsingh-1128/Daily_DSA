// #include<iostream>
// using namespace std;

// class car{
//     public:
//     string name;
//     string color;
//     int *mileage;

//     car(string name,string color){
//         this->name=name;
//         this->color=color;
//         mileage=new int;
//         *mileage=12;
//     }

//     car(car &NewCar){
//         cout<<"copying from orignal to new..."<<endl;
//         name=NewCar.name;
//         color=NewCar.color;
//         mileage=NewCar.mileage;
//     }

// };

// int main(){
     //cout<<"shallow copy...."<<endl;
//     car c1("Audi" ,"Black"); 

//     car c2(c1);           //costmize copy constructor 
//     cout<<c2.name<<endl;
//     cout<<c2.color<<endl;
//     cout<<*c2.mileage<<endl;
//     *c2.mileage=10;
//     cout<<*c1.mileage<<endl;



// }




// DEEP COPY

#include<iostream>
using namespace std;

class car{
    public:
    string name;
    string color;
    int *mileage;

    car(string name,string color){
        this->name=name;
        this->color=color;
        mileage=new int;
        *mileage=12;
    }

    car(car &NewCar){
        cout<<"copying from orignal to new..."<<endl;
        name=NewCar.name;
        color=NewCar.color;
        mileage=new int;
        *mileage=*NewCar.mileage;
    }

};

int main(){

    cout<<"Deep copy......"<<endl;
    car c1("Audi" ,"Black"); 

    car c2(c1);           //costmize copy constructor 
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    cout<<*c2.mileage<<endl;
    cout<<"c1 mileage is=";
    cout<<*c1.mileage<<endl;
    cout<<"c2 mileage is=";
    *c2.mileage=10;
    cout<<*c2.mileage<<endl;



}