#include<iostream>
using namespace std;

// void subarr(int *arr,int n){
//     int maxsum=INT_MIN;  //INT_MIN  is macro in cpp for -infnity use for find max number (because max!=0 if there is negative value in a arr[])
//     for(int start=0;start<n;start++){
//         for(int end=start;end<n;end++){
//             int currsum=0;
//             for(int i=start;i<=end;i++){
//                 currsum+=arr[i];
//             }
//             cout<<currsum<<" ";
//             // if(currsum>maxsum){   
//             //     maxsum=currsum;
//             // }
//             maxsum=max(currsum,maxsum);
            
//         }
//         cout<<endl;
//     }
//     cout<<"max sum is="<<maxsum; 
// }

// int main(){
//     int arr[]={1,2,-2,4,-5,6,-3};
//     int n=sizeof(arr)/sizeof(int);

//     subarr(arr,n);
// }



// void subarr(int *arr,int n){

//     int maxsum=INT_MIN;  
//     for(int start=0;start<n;start++){
//         int currsum=0;
//         for(int end=start;end<n;end++){
//             currsum+=arr[end];
//             maxsum=max(currsum,maxsum);
//         }
            
// }
//     cout<<"max_sum of sub arr[]="<<maxsum;
// }

// int main(){
//     int arr[]={1,2,-2,4,-5,6,-3};
//     int n=sizeof(arr)/sizeof(int);

//     subarr(arr,n);
// }



void subarr(int *arr,int n){
    int currsum=0;
    int maxsum=INT_MIN;  
    for(int start=0;start<n;start++){
             currsum+=arr[start];
             if(currsum<0){
                currsum=0;
             }
            maxsum=max(maxsum,currsum);
}
    cout<<"max_sum of sub arr[]="<<maxsum;
}

int main(){
    int arr[]={1,2,-2,4,-5,6,-3};
    int n=sizeof(arr)/sizeof(int);

    subarr(arr,n);
}