#include<bits/stdc++.h>
using namespace std;

int ClearBit(int n, int pos){
    int mask  = ~(1 << pos);
    return n & mask;
}

int main(){
    int n,i;
    cin >> n;
    cin >> i;

    cout << ClearBit(n, i) << endl;
    return 0;
}