#include<iostream>
using namespace std;

// int main(){
//     for(int i=1;i<=4;i++){
//         for(int j=4;j>=i;j--){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

int main(){
    int n;
    cout<<"enter a number=";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i+1);j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

//      * * * * *        5
//      * * * *          4
//.     * * *            3
//.     * *              2
//.     *                1

