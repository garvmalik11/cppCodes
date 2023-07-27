#include<bits/stdc++.h>
using namespace std;

int max(int mx,int a[],int n){
    for(int i=0; i<n ;i++){
        if(mx>a[i]){
            return mx;
        }
        else{
            return a[i];
        }
    }
    return 0;
}

int main(){
    int n;
    int mx=-1999;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        mx=max(mx,arr[i]);
        cout<<mx<<endl;
    }
    return 0;
}