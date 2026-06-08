#include<iostream>
#include<string>
using namespace std;

void towerofhanoi(int n,string src,string helper,string dest){
    if(n==1){
        cout<<"transfer disk "<<n<<" from "<<src<<" to "<<dest<<endl;
        return;
    }
    towerofhanoi(n-1,src,dest,helper);
    cout<<"transfer disk "<<n<<" from "<<src<<" to "<<helper<<endl;

    towerofhanoi(n-1,helper,src,dest);

}

int main(){
    int n=3;
    towerofhanoi(n,"A","B","C");
}