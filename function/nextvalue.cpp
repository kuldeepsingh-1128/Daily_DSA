#include<iostream>
using namespace std;

char value(char ch){
    if(ch=='z' || ch=='Z'){
        return 'a';
    }
    // int a;
    // a=ch+1;
    // return char(a);
    return ch +1;
}


int main(){
    char ch;
    cout<<"enter any charter value=";
    cin>>ch;
    cout<<value(ch);
}