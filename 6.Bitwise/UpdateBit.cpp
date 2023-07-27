#include<bits/stdc++.h>
using namespace std;

int UpdateBit(int n, int pos, int value){
    int mask = ~ (1 << pos);
    n = n & mask;
    return (n | (value << pos));
}

int main(){
    int n;
    cin >> n;
    int i;
    cin >> i;
    int value;
    cin >> value;
    
    cout << UpdateBit(n, i, value) << endl;
    return 0;

}