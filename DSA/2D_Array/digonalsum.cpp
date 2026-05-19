#include<iostream>
using namespace std;

int diagonalsum(int mat[3][3], int n,int m){
    int sum=0;

    // for(int i=0;i<n;i++){ //rows
    //     for(int j=0;j<m;j++){ //cols
    //         if(i==j){
    //             sum+=mat[i][j];
    //         }
    //         else if(j==n-i-1){
    //             sum+=mat[i][j];
    //         }
    //     }
    // }


    for(int i=0;i<n;i++){
        sum+=mat[i][i];
        if(i != n-i-1){
            sum+=mat[i][n-i-1];
        }
    }
    
    cout<<sum;
    return sum;
    
}

int main(){
    int mat[3][3]={{ 1, 2,  3},
                    { 4, 5, 6},
                    { 7, 8, 9}};

diagonalsum(mat,3,3);
}