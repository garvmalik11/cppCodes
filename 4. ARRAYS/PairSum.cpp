//BRUTEFORCE !!!!!
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int k=10;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] + arr[j]== k){
                cout << "PRESENT AT INDEX "<<i<<" "<<j<<endl;
                break;
            }
        }
    }
    return 0;
}