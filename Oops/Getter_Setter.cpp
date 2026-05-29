#include<iostream>
using namespace std;

class student{
    string name;
    float cgpa;

    public:
    void setcgpa(float cgpaval){
        cgpa=cgpaval;
    }

    void setname(string nameval){
        name=nameval;
    }

    string getname(){
        return name;
    }
    float getcgpa(){
        cgpa=cgpa *10;
        return cgpa;
    }
};


int main(){
    student s;
    s.setname("kuldeep");
    s.setcgpa(9.8);

    cout<<s.getname()<<endl;
    cout<<s.getcgpa()<<endl;

}