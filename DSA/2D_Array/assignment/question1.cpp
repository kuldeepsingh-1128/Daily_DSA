#include<iostream>
using namespace std;

int countnum(int mat[][3],int n,int m,int key){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==key){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}

int main(){
    int mat[2][3]={{4,7,8},{8,8,7}};
    int key;
    cout<<"enter key value=";
    cin>>key;

    countnum(mat,2,3,key);
}