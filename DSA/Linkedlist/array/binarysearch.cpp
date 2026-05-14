// #include<iostream>
// using namespace std;



// int main(){
//     int arr[]={2,4,5,6,7,9,12,15,16,17};
//     int key=12;
//     int n=sizeof(arr)/sizeof(int);
//     int st=0,end=n-1;
//     int ans=0;

//     while(st<=end){
//         int mid=(st+end)/2;
//         if(arr[mid]==key){
//             cout<<mid<<endl;
//             return mid;
//         }
//         else if(arr[mid]<key){
//             st=mid+1;
//         }else{
//             end=mid-1;
//         }
//     }
//     return 0;
    
// }


#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int key){
    int st=0,end=n-1;
    while(st<=end){
        int mid=(st+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;

}

int main(){
    int arr[]={2,4,5,6,7,9,12,15,16,17};
    int key=12;
    int n=sizeof(arr)/sizeof(int);
    
    cout<<binarysearch(arr,n,key)<<endl;

    return 0; 
}