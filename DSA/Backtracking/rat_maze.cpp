#include<iostream>
using namespace std;

int ratways(int row,int col,int n,int m,string str){
    if(row==n-1 && col==m-1){
        cout<<str<<endl;
        return 1;
    }
    if(row>=n || col>=m){
        return 0;
    }
    if((row==1 && col==0) || (row==3 && col==1 || (row==1 && col==2))){
        return 0;
    }

    //down
    int ways1=ratways(row+1,col,n,m,str+'D');

    //left
    int ways2=ratways(row,col+1,n,m,str+'R');

    return ways1+ways2;
}

int main(){
    int n=4;
    int m=4;
    string str="";
    cout<<ratways(0,0,n,m,str);
}