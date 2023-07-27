#include <bits/stdc++.h>
using namespace std;
int main(){
    
    string s;
    cin >> s;
    
    string n;
    
    if(s[8]=='P'){
        if(s[1] == '2' && s[0]=='1'){
            n[0] = '1';
            n[1] = '2';
        }
        else{
        n[0] = s[0] + 1;
        n[1] = s[1] + 2;
        }
    }
    if(s[8] == 'A'){
        if(s[1] == '2'){
            n[0] = '0';
            n[1] = '0';
        }
        else{
            n[0] = s[0];
            n[1] = s [1];
        }
    }
    // cout << n[0] <<endl;
    n[3] = s[3];
    n[4] = s[4];
    n[6] = s[6];
    n[7] = s[7];
    n[2] = ':';
    n[5] = ':';
    cout<<n[0]<<n[1]<<n[2]<<n[3]<<n[4]<<n[5]<<n[6]<<n[7];
    return 0;
}
