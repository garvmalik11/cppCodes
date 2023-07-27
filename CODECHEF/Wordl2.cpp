#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        string T;
        for(int i=0;i<S.size();i++){
            if(S[i]==T[i]){
                cout << "G";
            }
            else{
                cout << "B";
            }
        }
    }
    return 0;
}