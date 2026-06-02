#include<iostream>
using namespace std;

class example{
    public:
    example(){
        cout<<"constructor is called...\n";
    }
    ~example(){
        cout<<"distructor is called..\n";
    }
};

int main(){
    int a=0;
    if(a==0){
        static example eg;
    }
    cout<<"code ending..\n";
}