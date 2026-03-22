#include<iostream>
using namespace std;

int main(){
    int n=5;
    // cout<<"enter a number=";
    // cin>>n;
    
    for(int i=1;i<=n;i++){
        int k=i;
        int l=i;
        for(int j=n-1;j>=i;j--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<k;
            k--;
        }

        for(int j=2;j<=i;j++){
            cout<<j;
            // l++;
        }

        cout<<endl;
    }
}