#include<iostream>
using namespace std;

void setbit(int num,int index){
    int mask=1<<index;
    num=mask | num;
    cout<<"bit has been seted="<<num<<endl;
}

int main(){
    setbit(6,3);
    setbit(7,3);
}