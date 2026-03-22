#include<iostream>
using namespace std;

int main(){
    // int x;
    // cout<<"enter a number=";
    // cin>>x;
    // if(x%2==0){
    //     cout<<"number is even";
    // }
    // else{
    //     cout<<"number is odd";
    // }


    bool istrue;
    int age;
    cout<<"enter your age=";
    cin>>age;
    istrue=(age>=18)?true:false;

    if(istrue==true){
        cout<<"you can drive bro";
    }
    else{
        cout<<"you can't drive bro!!";
    }
    

}

