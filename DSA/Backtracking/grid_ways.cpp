#include<iostream>
using namespace std;

int gridways(int r,int c,int n,int m,string str){
    if(r==n-1 && c==m-1){
        cout<<str<<endl;
        return 1;

    }
    if(r>=n || c>=m){
        return 0;
    }

    // right
    int ways1=gridways(r,c+1,n,m,str+'R');

    //down
    int ways2=gridways(r+1,c,n,m,str+'D');

    return ways1+ways2;
}

int main(){
    int n=3;
    int m=3;
    string str="";
    cout<<gridways(0,0,n,m,str);
}