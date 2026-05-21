#include<iostream>
using namespace std;

void reverseofarr(char word[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(word[start],word[end]);
        start++;
        end--;
    }
}


int main(){
    char word[]="abcde";
    cout<<word<<endl;
    reverseofarr(word,strlen(word));
    cout<<word<<endl;
}