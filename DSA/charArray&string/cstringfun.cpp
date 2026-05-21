#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str1[100];
    char str2[30]={"hello bro "};
    char str3[100];
    // str1="kuldeep singh";    we can't assign directly
    strcpy(str1,str2);
    strcpy(str3,"kuldeep singh");
    cout<<str1<<endl;
    cout<<str3<<endl;

    strcat(str1,str3);
    cout<<str1<<endl;

    cout<<strcmp(str1,str3);   // h<k =>(-ve)
}