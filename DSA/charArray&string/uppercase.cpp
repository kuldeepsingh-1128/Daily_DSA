#include<iostream>
using namespace std;

void ToUpperCase(char word[],int n){
    
    for(int i=0;i<n;i++){
        char ch=word[i];
        if(ch>='A' && ch<='Z'){
            continue;
        }
        else{
            word[i]=ch-'a'+'A';
        }
    }

}

void ToLowerCase(char word[],int n){
    
    for(int i=0;i<n;i++){
        char ch=word[i];
        if(ch>='a' && ch<='z'){
            continue;
        }
        else{
            word[i]=ch-'A'+'a';
        }
    }

}

int main(){
    char word[]="ApPle";
    cout<<word<<endl;
    ToUpperCase(word,strlen(word));
    cout<<word<<endl;
    ToLowerCase(word,strlen(word));
    cout<<word<<endl;
}