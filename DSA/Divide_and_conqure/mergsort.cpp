#include<iostream>
#include<vector>
using namespace std;

void merg(int arr[],int st,int end,int mid){
    vector<int> vec1;
    int i=st;
    int j=mid+1;

    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            vec1.push_back(arr[i++]);
        }else{
            vec1.push_back(arr[j++]);
        }
    }

    while(i<=mid){
        vec1.push_back(arr[i++]);
    }
    while (j<=end){
        vec1.push_back(arr[j++]); 
    }
    
    for(int i=st ,x=0;i<=end;i++){
        arr[i]=vec1[x++];
    }
}

void mergsort(int arr[],int st,int end){
    if(st>=end){
        return;
    }
    int mid=st+(end-st)/2;
    mergsort(arr,st,mid);
    mergsort(arr,mid+1,end);
    merg(arr,st,end,mid);
}

void printarr(int arr[] ,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6]={6,3,7,5,2,4};
    int n=6;
    mergsort(arr,0,n-1);
    printarr(arr,n);
}