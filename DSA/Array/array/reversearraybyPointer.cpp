#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(int);
    int st=0,end=n-1;

    while (st<end)
    {
        // swap(arr[st],arr[end]);
        int temp=arr[st];
        arr[st]=arr[end];
        arr[end]=temp;

        st++;
        end--;
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}