#include<iostream>
using namespace std;

int conversion(int n){
    int rem=0;
    int pow=1;
    int total=0;
    

    while (n>0)
    {
       rem=n%2;
       total=total+(rem*pow);
       pow*=10;
       n/=2;

    }
    return total;
    
}

int main(){
    int n;
    cout<<"enter a decimal number=";
    cin>>n;
    cout<<conversion(n);

}