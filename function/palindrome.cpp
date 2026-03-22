#include<iostream>
using namespace std;

int palindrome(int n){ //121
    int a;
    int ans=0;
    while(n!=0){
        a=n%10;
        n=n/10;
        ans=(ans*10)+a;
    }
    return ans;
}

int check(int n){
    if(n==palindrome(n)){
        cout<<"yes it is a palindrome!!";
    }
    else
    cout<<"it's not a palidrime!!";
    return 0;
}


int main(){
    int n;
    cout<<"enter a number=";
    cin>>n;
    cout<<palindrome(n)<<endl;


   cout<<check(n)<<endl;
}
