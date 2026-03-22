#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "enter a number=";
    cin >> x;

    bool isprime = true;
    for (int i = 2; i <=sqrt(x); i++)
    {
        if (x % i == 0)
        {
            isprime = false;
            break;
        }
    }

    if (isprime)
    {
        cout << "number is prime!!";
    }
    else
    {
        cout << "not prime number!!";
    }
}