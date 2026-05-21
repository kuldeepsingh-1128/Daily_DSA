#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"enter a string=";
    getline(cin,str,'*');
    // cout<<str.length();
    // cout<<str<<endl;
    // cout<<str[0]<<endl;
    // cout<<str[1]<<endl;
    for(char ch:str){
        cout<<ch<<" ";
    }
}