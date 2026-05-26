#include<iostream>
using namespace std;

int exponentiation(int x,int n){
    int ans=1;
    while (n>0)
    {

        if((n&1)==1){
            ans*=x;
        }
        x*=x;
        n=n>>1;
    }
    cout<<ans;
    return ans;
}

int main(){

    exponentiation(3,5);

}