#include<iostream>
using namespace std;

void counter(){
    static int count=0;     //can't reset by count=0    it contain value as last 
    count++;
    cout<<"counter="<<count<<endl;
}

int main(){
    counter();
    counter();
    counter();
}