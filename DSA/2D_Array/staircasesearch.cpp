#include<iostream>
using namespace std;

int staircase(int mat[3][3],int n,int m,int key){
    int row=0,col=m-1;
    while (row<n && col>=0)
    {
        if(mat[row][col]==key){
            cout<<"key at index "<<row<<" "<<col;
            return mat[row][col];
        }
        if(mat[row][col]>key){
            col--;
        }
        if(mat[row][col]<key){
            row++;
        }
    }
    return -1;
    
}

int main(){
    int mat[3][3]={{ 1, 2,  3},
                    { 4, 5, 6},
                    { 7, 8, 9}};

    int key;
    cout<<"enter a key=";
    cin>>key;

}