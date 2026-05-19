#include<iostream>
using namespace std;

void stocks(int *prices,int n){
    int best_buy[100000];
    best_buy[0]=INT_MAX;
    int max_profit=0;

    for(int i=0;i<n;i++){
        best_buy[i+1]=min(prices[i],best_buy[i]);


        int profit=prices[i]-best_buy[i];
        cout<<"profit is ="<<profit<<endl;
        max_profit=max(profit,max_profit);
        

    }

    cout<<"\nanswer is="<<max_profit;
}

int main(){
    int prices[]={7,1,5,3,6,4};
    int n=sizeof(prices)/sizeof(int);
    stocks(prices,n); 
}