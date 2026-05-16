#include<iostream>
using namespace std;

int twice(int *arr,int n){
    // bool value=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<"twice"<<endl;
                return true;
            }
        }
    }
    cout<<"Not having twice!!"<<endl;
    return false;
}

int main(){
    int arr[]={1,1,2,3,4};
    int n=sizeof(arr)/sizeof(int);

    cout<<twice(arr,n);
}