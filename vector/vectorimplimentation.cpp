#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec1={1,2,3};
    cout<<"size of vactor="<<vec1.size()<<endl;
    cout<<"capacity="<<vec1.capacity()<<endl;

    cout<<endl;

    vec1.push_back(4);
    cout<<"size of vactor="<<vec1.size()<<endl;
    cout<<"capacity="<<vec1.capacity()<<endl;
    cout<<endl;

    vec1.pop_back();
    cout<<"size of vactor="<<vec1.size()<<endl;
    cout<<"capacity="<<vec1.capacity()<<endl;

}