#include<iostream>
using namespace std;

int sum(int a,int b){
    int c=a+b;
    return c;
}
float sum(float a,float b){
    float c=a+b;
    return c;
}

int main(){
    cout<<sum(11,9)<<endl;
    cout<<sum(11.23454f,1.2f)<<endl;
}