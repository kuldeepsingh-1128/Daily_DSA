#include<iostream>
using namespace std;

void occurrences(int arr[],int start,int end,int key){
    if(start>end){
        cout<<endl;
        return;
    }
    if(arr[start]==key){
        cout<<start<<" , ";
        occurrences(arr,start+1,end,key);
    }
    else{
        occurrences(arr,start+1,end,key);
    }
}



int main(){
    int arr[9]={3,2,4,5,6,2,7,2,2};
    int n=sizeof(arr)/sizeof(int);
    int start=0;
    int end=n-1;

    occurrences(arr,start,end,2);
}