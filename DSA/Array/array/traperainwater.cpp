#include<iostream>
using namespace std;


void water(int *arr,int n){
    int left_most[20000],right_most[20000];
    left_most[0]=arr[0];
    right_most[n-1]=arr[n-1];

    for(int i=0;i<n;i++){
        left_most[i+1]=max(arr[i],left_most[i]);
        cout<<left_most[i]<<" ";

    }
    cout<<endl;

    for(int i=n-1;i>0;i--){
        right_most[i-1]=max(arr[i],right_most[i]);
        cout<<right_most[i]<<" ";
    }
    cout<<endl;

    int result=0;
    
    for(int i=0;i<n;i++){
        int ans=min(left_most[i],right_most[i])-arr[i];
        cout<<ans<<" ";
        if(ans>0){
            result+=ans;
        }
    }
    cout<<endl;
    cout<<"total water stored is="<<result;

}
 
int main(){
    int arr[]={4,2,0,6,3,2,5};
    int n=sizeof(arr)/sizeof(int);

    water(arr,n);
}