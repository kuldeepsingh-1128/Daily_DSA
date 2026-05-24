#include<iostream>
#include<vector>
using namespace std;

void pairsum(vector<int> vec,int target,int n){
    int start=0;
    int end=n-1;
    while(start<end){
        if(vec[start]+vec[end]==target){
            cout<<"index is="<<start<<" "<<end;
            return;
        }
        else if(vec[start]+vec[end]>target){
            end--;
        }
        else{
            start++;
        }
        

    }
    cout<<"target not found;";


}

int main(){
    vector<int> vec={2,7,11,15};
    int target=20;
    int n=vec.size();
    pairsum(vec,target,n);

}