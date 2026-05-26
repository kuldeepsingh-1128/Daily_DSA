#include<iostream>
using namespace std;

void rangebit(int num,int i,int j){
    int a=(~0)<<(j+1);
    int b=(1<<i)-1;
    
   
    num=num&(a|b);
    cout<<num<<endl;
}

int main(){
    rangebit(15,1,3);
    rangebit(31,1,3);
}