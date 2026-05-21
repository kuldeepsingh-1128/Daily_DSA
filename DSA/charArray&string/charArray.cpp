#include<iostream>
using namespace std;

int main(){
    int ch[]={'a','b','c'};
    cout<<ch<<endl;

    char cha[5]={'c','o','d','e'};      //due to [5] add size 4+1 (1 for '\0')
    cout<<strlen(cha)<<endl;            //only count string not null
    cout<<cha<<endl;


    char chars[]={'c','o','d','e','\0'};  //valid string can be channge by indexinng
    cout<<chars<<endl;

    char string[]={"kuldeep singh"};      //string literals (fix string)
    cout<<string<<endl;

    chars[2]='l';
    chars[3]='d';
    cout<<chars<<endl;

    
}