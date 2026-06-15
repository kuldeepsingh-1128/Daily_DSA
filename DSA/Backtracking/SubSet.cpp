#include<iostream>
#include<string>
using namespace std;

void SubSet(string str,string subset){
    if(str.size()==0){
        cout<<"'"<<subset<<"'"<<" ";
        return;
    }
    char ch=str[0];

    //choose yes
    SubSet(str.substr(1,str.size()-1),subset+ch);

    //choose NO
    SubSet(str.substr(1,str.size()-1),subset);
}


int main(){
    string str={"abc"};
    string subset={0};

    SubSet(str,subset);
}