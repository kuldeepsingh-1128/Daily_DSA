#include<iostream>
using namespace std;

int main(){
    int arr[8]={1,4,1,3,2,4,3,1};
    int arr1[8]={1,4,1,3,2,4,3,1};
    int arr2[8]={1,4,1,3,2,4,3,1};


    int n=sizeof(arr)/sizeof(int);
    int n1=sizeof(arr1)/sizeof(int);
    int n2=sizeof(arr2)/sizeof(int);

    sort(arr,arr+8);
    sort(arr1+3,arr1+8);
    sort(arr2,arr2+8,greater<int>());

    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n1;i++){
    cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n2;i++){
    cout<<arr2[i]<<" ";
    }
}