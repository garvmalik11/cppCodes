#include<bits/stdc++.h>
using namespace std;
int  main(){
    int a;
    cin >> a;
    int b;
    cin >> b;
    int n = a ^ b;
    int count = 0; 
    while (n & (n-1) == 0){
        count ++;
    }
    cout << count << endl;


}