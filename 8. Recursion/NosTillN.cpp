#include<bits/stdc++.h>
using namespace std;

void Dec(int n){
    if(n == 0){
        return;
    }
    cout << n << endl;
    Dec(n - 1);
}

void Inc (int n){
    if(n == 1){
        cout << "1" << endl;
        return ;
    }
    Inc (n-1);
    cout << n << endl;
}
int main(){
    int n;
    cin >> n;
    Dec( n);
    Inc ( n);
}