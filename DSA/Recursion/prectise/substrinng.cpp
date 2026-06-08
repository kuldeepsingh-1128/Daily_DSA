#include<iostream>
#include<string>
using namespace std;

void substring(string str,int i,int j,int n){
    if(i==n-1 && j==n-1){
        return;
    }
    if(j==n-1){
        i++;
        j=i;
        substring(str,i,j,n);
    }
    j++;
    cout<<str<<" , ";
}

int main(){
    string str="abcab";
    int n=str.size();
    int i=0;
    int j=0;
    substring(str,i,j,n);

    return 0;
}