#include<iostream>
using namespace std;

int main(){
    long long num;
    cout<<"enter a number=";
    cin>>num;
    if((num&1)==0){             //( 0110 & 0001 => 0000)
        cout<<"even number";
    }else {
        cout<<"Odd number";
    }
}