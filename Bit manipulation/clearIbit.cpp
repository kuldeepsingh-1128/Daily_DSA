#include<iostream>
using namespace std;

void cleariBit(int num,int i){
    num = num & (~0<<i);
    // for(int index=0;index<i;index++){
    //     num=num & ~(1<<i);
    // }
    cout<<num<<endl;
}

int main(){
    cleariBit(15,2);
}