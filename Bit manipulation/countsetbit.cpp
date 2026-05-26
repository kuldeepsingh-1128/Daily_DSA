#include<iostream>
using namespace std;

void countsetbit(int num){
    int sum=0;
    // for(int i=0;i<8;i++){
    //     if(num & 1){
    //         sum+=1;
    //     }
    //     num=num>>1;
    // }
    // cout<<sum<<endl;

    while (num>0)
    {
        int lastdigit=num & 1;
        sum+=lastdigit;
        num=num>>1;
    }
    cout<<sum<<endl;
    
}

int main(){
    countsetbit(15);
}