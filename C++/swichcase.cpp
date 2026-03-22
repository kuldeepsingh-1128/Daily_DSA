#include <iostream>
using namespace std;
int main()
{
    int x, y;
    char op;
    cout << "enter frist number =";
    cin >> x;
    cout << "enter second number=";
    cin >> y;
    cout << "enter opretor(+,-,*,/)=";
    cin >>op;

    switch (op)
    {
    case '-':
        cout << (x - y) << endl;
        break;
    case '+':
        cout << x + y << endl;
        break;
    case '*':
        cout << x * y << endl;
        break;
    case '/':
        cout << x / y << endl;
        break;
    default:
        cout << "invalid oprator!!";
        break;
    }
}