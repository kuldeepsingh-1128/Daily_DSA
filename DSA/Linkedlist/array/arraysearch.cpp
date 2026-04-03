#include<iostream>
using namespace std;

int search(int arr[], int n,int key){    //arr[] or *arr  (ak hi baat h)
    for(int i=0;i<=n;i++){
        if(arr[i]==key){
            cout<<"index for your key "<<key<<" is="<<i<<endl;
        }
    }
    return -1;
  
}
int main(){
    int arr[]={1,4,3,2,4,7,7,5,6,7,8};
    int key;
    cout<<"enter a number=";
    cin>>key;

    int n=sizeof(arr)/sizeof(int);
    // for(int i=0;i<=n;i++){
    //     if(arr[i]==key){
    //         cout<<"index for your key "<<key<<" is="<<i<<endl;
    //     }
    // }
    search(arr,n,key);
}