#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i;
    int arr[n];
    for( i=0;i<n;i++){
        cin >> arr[i]; 
    }
    int temp = 0;
    if(arr[i+1]<arr[i]){
        temp = arr[i+1];
        arr[i+1] = arr[i];
        arr[i] = temp;

    }

    for(int i=0 ;i<n;i++){
        cout << arr[i] <<" ";
    }
} 