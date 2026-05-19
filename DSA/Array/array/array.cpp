#include<iostream>

using namespace std;

int main(){
    int marks[50];
    marks[2]=11;
    int len=sizeof(marks)/sizeof(int);
    //cout<<"lenght of marks arr is ="<<sizeof(marks)/sizeof(int)<<endl;
    

    for(int i=0;i<len;i++){
        cout<<i<<"="<<marks[i]<<endl;
    }
}