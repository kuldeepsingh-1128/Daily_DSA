#include<iostream>
using namespace std;

int main(){
    char word[30];
    cin>>word;
    cout<<"your word is="<<word<<endl;
    cout<<"word length is="<<strlen(word)<<endl;


    char sentence[30];
    cin.getline(sentence,30);
    cout<<sentence<<endl;

    cin.getline(sentence,30,'*'); // '*' is delimiter here
    cout<<sentence<<endl;


}