#include<iostream>
using namespace std;

int sumofsecond(int nums[3][3],int n,int m){
    int sum=0;
    for(int j=0;j<m;j++){
        sum+=nums[1][j];
    }
    cout<<"sum of second row="<<sum;
    return sum;
}

int main(){
    int nums[3][3]={{1,4,9},{11,4,3},{2,2,3}};
    sumofsecond(nums,3,3);
}