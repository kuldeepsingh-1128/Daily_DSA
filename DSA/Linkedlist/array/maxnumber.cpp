#include<iostream>
using namespace std;
int main(){
    int arr[]={3,5,12,7,9,4};
    int max=arr[0];
    int secondmax=arr[0];
    int n=sizeof(arr)/sizeof(int);
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            secondmax=max;
            max=arr[i];

            cout<<"assign max is ="<<max<<endl;
            cout<<"assign second max is ="<<secondmax<<endl;
            
        }
        else if (arr[i]!=max && arr[i]>secondmax)
        {
           secondmax=arr[i];
           cout<<"assiged max is ="<<max<<endl;
            cout<<"assign second max is ="<<secondmax<<endl;
        }
        
        
    }
    cout<<"max is ="<<max<<endl;
    cout<<"second max is ="<<secondmax;
    return 0;
}