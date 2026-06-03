#include<iostream>
using namespace std;

int firstocc(vector<int> vec1,int i,int target){
    if(vec1[i]==target){
        return i;
    }
    if(i==vec1.size()-1){
        return -1;
    }
    return firstocc(vec1,i+1,target);
}

int main(){
    vector <int> vec1={1,2,3,4,5,6,7,8};
    cout<<firstocc(vec1,0,9);
}