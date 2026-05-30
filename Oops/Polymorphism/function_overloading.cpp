#include<iostream>
using namespace std;

class cal{
    public:

    void add(int x,int y){
        cout<<"addition is ="<<x+y<<endl;
        cout<<"first function is called...\n" ;
    }

    void add(int x,int y,int z){
        cout<<"addition is ="<<x+y+z<<endl;
        cout<<"second function is called...\n";
    }
};

int main(){
    cal obj1;
    obj1.add(2 ,3);
    obj1.add(2 ,3,5);
}