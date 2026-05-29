#include<iostream>
using namespace std;

class teacher{
    public:
    void salary(int salary){
        cout<<"basic salary is =$"<<salary<<"\n";
    }
};

class student{
    public:
    void roll_number(){
        cout<<"kuldeep roll number is=28\n";
    }
};

class TA:public teacher,public student{
    public:
    void subject(){
        cout<<"TA is expert in all subject...\n";
    }
};

int main(){
    TA t;
    t.salary(10000);
    t.roll_number();
    t.subject();
}