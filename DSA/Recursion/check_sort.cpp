#include<iostream>
using namespace std;

int isSort(int arr[],int n,int i){
    if (i==n-1){
        cout<<"True ";
        return true;
    }
    
    if (arr[i]>arr[i+1])
    {
        cout<<"false ";
        return false;
    }
    
    return isSort(arr,n,i+1);;
}

int main(){
    int arr1[5]={2,4,5,6,7};
    int arr2[5]={2,4,6,5,7};

    cout<<isSort(arr1,5,0)<<endl;
    cout<<isSort(arr2,5,0)<<endl;

}