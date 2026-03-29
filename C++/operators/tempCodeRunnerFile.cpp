#include<iostream>
using namespace std;

void changeA(int n){
        n=10;
        cout<<n<<endl;

}

void changea(int *ptr){
        *ptr=20;
        cout<<*ptr<<endl;
}
int main(){
        int n=5;
        cout<<n<<endl;
        int *p=&n;
        // cout<<n<<" "<<&n<<" "<<p<<" "<<*p;
        changeA(n);
        cout<<n<<endl;
        changea(&n);
        cout<<n<<endl;
        // int *ptr=&n;
        // char ch='A';
        // char &cho=ch;

        // cho+=a;
        // *ptr+=ch;
        
        // cout<<a<<""

} 
