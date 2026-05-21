#include<iostream>
#include<string>
using namespace std;

bool anagram(string str1,string str2){
    int freq[26]={0};
    if(str1.length()!=str2.length()){
        cout<<"not valid anagram!!"; 
        return false;
    }
    for(int i=0;i<str1.length();i++){
        freq[str1[i]-'a']++;
    }
    for(int i=0;i<str2.length();i++){
        int idx=str2[i]-'a';
        if(freq[idx]==0){
            cout<<"not valid anagram!!";
            return false;
        }
        freq[idx]--;
    }
    cout<<"valid anagram!!";
    return true;

}

int main(){
    string str1="anagram";
    string str2="nagaram";
    

    anagram(str1,str2);
}