#include <iostream>
using namespace std;
int main()
{
    int a, s = 2;
    cin>>a;
    for (s = 2; s < a; s++)
    {
        if (a % s == 0)
        {
            cout << "non prime";
            break;
        }
    }
    if(s==a){
    cout << "Prime";
    }
    return 0;
}