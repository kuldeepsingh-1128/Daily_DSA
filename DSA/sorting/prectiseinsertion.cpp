#include<iostream>
using namespace std;

void instertionsort(char arr[],int n){
    for(int i=0;i<n;i++){
        int curr=arr[i];
        int prev=i-1;

        while(prev>=0 && arr[prev]<curr){
            swap(arr[prev+1],arr[prev]);
            prev--;
        }
        arr[prev+1]=curr;
    }
    for(int i=0;i<n;i++){
        cout<<char(arr[i])<<" ";
    }
}

int main(){
    char arr[6]={'f','b','a','e','c','d'};
    int n=sizeof(arr)/sizeof(char);

    instertionsort(arr,n);

}