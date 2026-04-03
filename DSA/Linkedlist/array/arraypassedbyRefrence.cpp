#include<iostream>
using namespace std;

int pointer(int nums[],int n){
    // int n=sizeof(nums)/sizeof(int);
    cout<<n<<endl;
    return n;
}

int main(){
    int arr[]={2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);
    cout<<sizeof(arr)<<" "<<sizeof(int)<<" "<<n<<endl;

    pointer(arr,n);
}