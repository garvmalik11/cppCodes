#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a,b;
    cin >> a >> b;
    int c1 = n / a;
    int c2 = n / b;
    int c3 = n / (a * b);

    cout << ((c1+c2) - c3) << endl;
    return 0;
}