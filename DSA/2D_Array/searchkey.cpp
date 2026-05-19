#include<iostream>
using namespace std;

int searchkey(int mat[3][3], int n,int m,int key){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(key==mat[i][j]){
                cout<<"key is found at index="<<i<<" "<<j;
            }
        }
    }
    return -1;
}

int main(){
    int mat[3][3]={{ 1, 2,  3},
                    { 4, 5, 6},
                    { 7, 8, 9}};
    int key;
    cout<<"enter key=";
    cin>>key;

searchkey(mat,3,3,key);
}