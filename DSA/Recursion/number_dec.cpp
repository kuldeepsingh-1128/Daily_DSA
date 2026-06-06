#include<iostream>
using namespace std;

int printNumbers(int n){
    if(n==0){
        return 0;
    }
    cout<<n<<" ";
    return printNumbers(n-1);

}

int main(){
    printNumbers(10);
}


