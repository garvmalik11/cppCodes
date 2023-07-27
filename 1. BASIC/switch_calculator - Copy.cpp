#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char c;
    cout<<"ENTER A OPERATOR(+,-,*,/)  ";
    cin>>c;
    cout << "ENTER TWO OPERANDS  ";
    cin >> a >> b;
    switch (c)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;

    default:
            cout<<"RAM RAM";
        break;
    }
    return 0;
}