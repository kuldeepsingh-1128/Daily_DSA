#include<iostream>
using namespace std;

class A{
    string secret="secret data..";
    friend class B; 
    friend void revelsecret(A &obj);
};

class B{                        //friend class
    public:
    void showSecret(A &obj){
        cout<<obj.secret<<endl;
    }
};

void revelsecret(A &obj){       //friend function
    cout<<obj.secret<<endl;
}


int main(){
    A a1;
    B b1;

    b1.showSecret(a1);

    revelsecret(a1);
}