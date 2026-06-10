#include<iostream>
using namespace std;

int partision(int arr[],int st,int end){
    int i=st-1;
    int pivot=arr[end];

    for(int j=st;j<end;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[j],arr[i]);
        }
    }
    i++;
    swap(arr[i],arr[end]);
    return i;
}

void quicksort(int arr[],int st,int end){
    if(st>=end){
        return;
    }

    int Pivotidx= partision(arr,st,end);

    quicksort(arr,st,Pivotidx-1);       //left
    quicksort(arr,Pivotidx+1,end);      //right
}

void printarr(int arr[] ,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[]={3,2,5,6,3,6,3,5};
    int n=8;
    quicksort(arr,0,n-1);
    printarr(arr,n);

}