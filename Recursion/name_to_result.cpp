#include<iostream>
#include<string>
using namespace std;

int fun(string str){
    int sum=0;
    for(int i=0;i<str.size();i++){
        int value=(int)(str[i]-'a')+1;
        sum+=value;
    }
    return sum;
}

int main(){
    string str="";
    cout<<"enter a name=";
    cin>>str;

    cout<<fun(str);


}