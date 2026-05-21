#include<iostream>
#include<string>

using namespace std;

bool equalbyswap(string str1,string str2){
    if(str1.length()!=str2.length()){
        cout<<"different string length!!";
        return false;
    }
    int idx=-1,prvidx=-1;
    for(int i=0;i<str1.length();i++){
        if(str1[i]!=str2[i]){
            if(idx==-1){
                idx=i;
            }else{
                prvidx=i;
            }
        }
    }
    swap(str2[idx],str2[prvidx]);
    if(str1!=str2){
        cout<<"not only two string different more then two!!"<<endl;
    }
    cout<<str1<<"!="<<str2;
    return true;
}

int main(){
    string str1="bank";
    string str2="knab";
    
    equalbyswap(str1,str2);
}