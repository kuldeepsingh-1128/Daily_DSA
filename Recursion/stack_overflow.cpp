#include<iostream>
using namespace std;

void printNumbers(){
    
    cout<<"hello world... kaam";
    printNumbers();  // if there is no base case then error occur (segmentetion error)

}

int main(){
    printNumbers();
}


