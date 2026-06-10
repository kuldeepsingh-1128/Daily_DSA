#include<iostream>
using namespace std;

int binarysearch(int arr[],int st,int end,int target){
    int mid=st+(end-st)/2;
    if(arr[mid]==target){
            return mid;
        }
    if(st>end){
        return -1;
    }
        
        if(arr[st]<=arr[mid]){
            if(arr[st]<= target && target <= arr[mid]){

                return binarysearch(arr,st,mid-1,target);
            }else{
                return binarysearch(arr,mid+1,end,target);
            }
        }else{
            if(arr[mid]<= target && target <= arr[end]){

                return binarysearch(arr,mid+1,end,target);
            }else{
                return binarysearch(arr,st,mid-1,target);
            }
        }
    
    return -1;
}

int main(){
    int arr[10]={2,3,4,5,6,7,8,9,0,1};
    cout<<binarysearch(arr,0,9,5);
}