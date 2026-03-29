#include<iostream>
using namespace std;

int decToBin(int n){
    int rem=0;
    int pow=1;
    int total=0;
    

    while (n>0)
    {
       rem=n%2;
       total=total+(rem*pow);
       pow*=10;
       n/=2;

    }
    return total;
    
}


int convert(int n){
    int ans=0;
    int pow=1;
    int val;
    while(n>0){
        val=n%10;
        n/=10;
        ans+=val*pow;
        pow*=2;
        
    }
    cout<<"conversion in decimal="<<ans<<endl;
    return 0;
}

int binerysum(int a,int b){
    int x=0;
    int y=0;
    int sum=0,carry=0,total=0;
    int pow=1;

    while (a>0 || b>0)
    {
        x=a%10;
        y=b%10;
        // sum=x+y;
        if(x+y+carry==2){
            sum=0;
            carry=1;
        }
        else if (x+y+carry==3)
        {
            sum=1;
            carry=1;
        }
        else{
            sum=x+y+carry;
            carry=0;
        }
        total+=sum*pow;
        pow*=10;
        a/=10;
        b/=10;
    }
    if(carry==1){
        total+=carry*pow;
    }
    cout<<"sum in binery is="<<total<<endl;
    return convert(total);

    
}
int main(){
    int x,y,a,b;
    cout<<"Enter first number=";
    cin>>x;
    cout<<"Enter second number=";
    cin>>y;

    a=decToBin(x);
    b=decToBin(y);
    cout<<endl<<"you enter "<<a<<" & "<<b<<" in binery"<<endl;


    cout<<binerysum(a,b);
}