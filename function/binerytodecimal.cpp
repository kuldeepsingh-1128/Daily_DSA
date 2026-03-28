#include<iostream>
using namespace std;

int convert(int n){
    int ans=0;
    int pow=1;
    int val;
    while(n>0){
        val=n%10;
        n/=10;
        ans+=val*pow;
        pow*=2;
        
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter a binary number=";
    cin>>n;
    cout<<convert(n);
}