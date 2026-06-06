#include<iostream>
using namespace std;

int printNumbers(int n){
    if(n==0){
        return 0;
    }

    int sum=n+printNumbers(n-1);
    return sum;

}

int main(){
    cout<<printNumbers(5);
}


