#include<iostream>
using namespace std;

class parents{
    public:

    void show(){
        cout<<"parents is called...";
    }
};

class child : public parents{
    public:
    void show(){
        cout<<"child is called...";
    }

};

int main(){
    child child1;
    child1.show();
}