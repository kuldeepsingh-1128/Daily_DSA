#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int current=0;


    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            int sum=0;

            // cout<<"("<<arr[start]<<","<<arr[end]<<")";
            for(int k=start;k<=end;k++){
                cout<<arr[k];
                sum+=arr[k];
            }
            // if(sum>current){
            //     current=sum;
            // }
            current=max(current,sum);


            cout<<",";
        }
        cout<<endl;
    }
    cout<<"sum of max subarray is="<<current<<endl;
}


