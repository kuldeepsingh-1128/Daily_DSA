#include<iostream>
using namespace std;

bool staircase(int mat[3][3],int n,int m,int key){
    int row=0,col=m-1;
    while (row<n && col>=0)
    {
        if(mat[row][col]==key){
            cout<<"found cell=( "<<row<<" "<<col<<" )";
            return true;
        }
        else if(mat[row][col]>key){
            col--;
        }
        else{
            row++;
        }
    }
    cout<<"value not found";
    return false;
    
}

int main(){
    int mat[3][3]={{ 1, 2,  3},
                    { 4, 5, 6},
                    { 7, 8, 9}};

    int key;
    cout<<"enter a key=";
    cin>>key;
    staircase(mat,3,3,key);

}