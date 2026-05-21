#include<iostream>
using namespace std;

int palindrome(char word[],int n){
    bool result=true;
    int start=0;
    int end=n-1;

    while(start<end){
        if(word[start]!=word[end]){
            result=false;
            cout<<"not a palindrome";
            return false;
        }
        start++;
        end--;
    }
    cout<<"yes its palindrome ";
    return result; 
}

int main(){
    char word[]={"maam"};
    palindrome(word,strlen(word));
}