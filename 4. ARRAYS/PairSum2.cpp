#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int low = 0;
    int high = n-1;
    
    while(low < high){
    if(arr[low] + arr[high] == k){
        cout << "Found At " <<low<<" "<<high;
        break;
    }
    else if(arr[low] + arr[high] > k){
        high--;
    }
    else if(arr[low] + arr[high] < k){
        low++; 
    }
    else{
        cout <<"Not Found !"<< endl;
    }
    }
}