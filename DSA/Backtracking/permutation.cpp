#include<iostream>
#include<string>
using namespace std;

void permutation(string str,string subset){
    if(str.size()==0){
        cout<<subset<<endl;
        return;
    }
    for(int i=0;i<=str.size()-1;i++){
        char ch=str[i];
        string nextstr=str.substr(0,i) +str.substr(i+1,str.size()-1);
        permutation(nextstr,subset+ch);
    }


}

int main(){
    string str="abc";
    string subset="";
    permutation(str,subset);
}