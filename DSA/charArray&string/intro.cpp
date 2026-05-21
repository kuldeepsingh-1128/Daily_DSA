#include<iostream>
using namespace std;

int main(){
    char ch[]={'a','b','c','d'};
    int arr[]={1,2,3,4};
    int m=sizeof(arr)/sizeof(int);   // 16/4=4     size of int=4
    int n=sizeof(ch)/sizeof(char);   // 4/1=4      size of char=1
    cout<<n<<" "<<m<<endl;
    for(int i=0;i<n;i++){
        cout<<int(ch[i])<<" ";
    }
}