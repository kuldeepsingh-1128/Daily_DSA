#include<iostream>
using namespace std;

void binarysearch(int arr[],int start,int end,int key){
    if(start>end){
        return;
    }
    int mid=0;

    mid=start+(end-start)/2;

    if(arr[mid]==key){
        cout<<"key at index="<<mid;
        return;
    }
    if(arr[mid]>key){
        binarysearch(arr,start,mid-1,key);
    }
    else{
        binarysearch(arr,mid+1,end,key);
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);
    int start=0;
    int end=n-1;

    binarysearch(arr,start,end,1);

}