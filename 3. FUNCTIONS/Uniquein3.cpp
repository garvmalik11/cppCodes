#include<bits/stdc++.h>
using namespace std;

bool Getbit(int n, int pos){
    int mask = 1 << pos;
    return ((n & mask)!=0);
}
int Setbit(int n, int pos){
    int mask = 1 << pos;
    return (n | mask);
}

void Unique(int arr[] , int n){

    int result = 0;

    for(int i=0; i<64; i++){
        int sum = 0;
        for(int j=0; j<n; j++){
            if(Getbit (arr[j], i)){
                sum ++; 
            }
        }
        if(sum %3 != 0){
            result = Setbit (result , i);
        }
    }
    cout << result << endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    Unique(arr, n);
    return 0;
}