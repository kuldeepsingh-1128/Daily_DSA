#include<iostream>
using namespace std;

void checknumber(int num){
    if(!(num & (num-1))){
        cout<<"it is power of two";
    }
    else{
        cout<<"its not a power of two";
    }
}

int main(){
    int num;
    cout<<"enter number to check is power of two or not=";
    cin>>num;
    checknumber(num);

}