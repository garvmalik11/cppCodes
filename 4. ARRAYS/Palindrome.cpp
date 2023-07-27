#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    char arr[n+1];
    cin >> arr;

    bool check = true;
    for(int i=0; i<n; i++){
        if(arr[i] != arr[n-1-i]){
            check = 0;
            break;
        }
    }

    if(check == true){
        cout << "palindrome" << endl;
    }
    else
    cout << "Not Palindrome" << endl;
    
    return 0;
}