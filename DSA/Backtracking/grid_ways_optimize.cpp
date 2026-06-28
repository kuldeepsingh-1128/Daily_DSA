#include<iostream>
using namespace std;

int fact(int n){
    
    if(n==0 || n==1){
        return 1; 
    }

    return n*fact(n-1);
}

int gridways(int n,int m){
    int ways;
    return ways=fact((n-1)+(m-1))/(fact(n-1)*fact(m-1));
}

int main(){
    int n=4;
    int m=4;
    cout<<gridways(n,m);
}