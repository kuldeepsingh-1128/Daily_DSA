#include<iostream>
using namespace std;

void updateval(int num,int i,int value){
    num=num & ~(1<<i);

    num= num | (value<<i);

    cout<<num<<endl;

}


int main(){
    updateval(7,0,0);
    updateval(7,3,1);
}