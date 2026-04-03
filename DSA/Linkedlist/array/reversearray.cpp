#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(int);

    int revarr[n];

    for(int i=0;i<n;i++){
        revarr[i]=arr[n-(i+1)];
    }

    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<=n-1;i++){
        cout<<revarr[i]<<" ";
    }
    
}