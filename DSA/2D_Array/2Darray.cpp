#include<iostream>
using namespace std;

int main(){
    int student[3][3]={0};
    int n=3,m=3;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cout<<"Value for index "<<i<<" "<<j<<" is=";
        cin>>student[i][j];
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cout<<student[i][j]<<"\t ";
        }
        cout<<endl;
    }
}