#include<bits/stdc++.h>
using namespace std;

int SetBit(int n, int pos){
    int mask = 1 << pos;
    return n | mask;
    // return(n | (1 << pos));
}

int main(){
    int n;
    cin >> n;
    int i;
    cin >>i;

    cout << SetBit(n, i) << endl; 
    return 0;
}