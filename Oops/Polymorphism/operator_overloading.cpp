#include<iostream>
using namespace std;

class Complex{
    public:
    int real;
    int imag;
    Complex(int x,int y){
        real=x;
        imag=y;
    } 
    void show(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }

    void operator +(Complex &c2 ){
        int resreal=this->real+c2.real;
        int resimg=this->imag+c2.imag;

        Complex c3(resreal,resimg);

        c3.show();
    }

    void operator - (Complex & c2){
        int resreal=this->real - c2.real;
        int resimg=this->imag - c2.imag;

        Complex c4(resreal,resimg);
        c4.show();
    }
};

int main(){
    Complex c1(2,4);
    Complex c2(1,2);


    c1.show();
    c2.show();
    c1 + c2;
    c1 - c2;
    // c1.operator+(c2);

}