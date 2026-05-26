#include<iostream>
using namespace std;

void Getbit(int num,int index){
    int mask=1<<index;


    if((mask & num)==0){
        cout<<"index "<<index<<" value is 0";
    }else{
        cout<<"index "<<index<<" value is 1";
    }

}

int main(){
    Getbit(6,2);
}