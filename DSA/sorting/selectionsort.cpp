#include<iostream>
using namespace std;

void selectionsort(int nums[],int n){
    for(int i=0;i<n;i++){
        int minidx=i;
        for(int j=i+1;j<n;j++){
            if(nums[j]<nums[minidx]){
                minidx=j;
            }
        }
        swap(nums[i],nums[minidx]);
        cout<<nums[i]<<"  ";
    }
}

int main(){
    int nums[]={5,4,1,3,2};
    int n=sizeof(nums)/sizeof(int);

    selectionsort(nums,n);
}