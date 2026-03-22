#include<iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}

int combination(int n,int r){
    int val1=fact(n);
    int val2=fact(r);
    int val3=fact(n-r);


    return (val1/(val2*val3));
}

int main(){
    cout<<fact(5)<<endl;
    cout<<combination(4,3);
}