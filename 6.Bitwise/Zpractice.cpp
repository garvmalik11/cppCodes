#include<bits/stdc++.h>
using namespace std;

int Getbit(int n , int pos){
    int mask = 1 << pos;
    return ((n & mask) != 0);
}

void Unique(int arr[], int n){
    int xorsum = 0;
    for(int i=0; i<n; i++){
        xorsum = xorsum ^ arr[i];
    }
    int newxor = 0;
    int pos = 0;
    int setbit = 0;
    int tempxor = xorsum;

    while(setbit != 1){
        setbit = xorsum & 1;
        pos ++;
        xorsum = xorsum >> 1;
    }
    for(int i=0; i<n; i++){
        if(Getbit(arr[i] , pos-1)){
            newxor = newxor ^ arr[i];
        }
    }
    cout << newxor << endl;
    cout << (tempxor ^ newxor) << endl;
    
}

int main(){
    int  n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    Unique(arr,n);
    return 0;
}