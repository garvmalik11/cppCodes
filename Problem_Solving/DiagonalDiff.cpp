#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n][n];
    
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    int lcount = 0;
    int rcount = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                lcount +=arr[i][j];
            }
            if((i+j)==n-1){
                rcount+=arr[i][j];
            }
        }
    }
    
    
    // cout << lcount <<endl;
    // cout << rcount << endl;
    int x = lcount-rcount;
    if(x<0){
        x=x*-1;
    }
    cout<<x<<endl;
   
    return 0;
    }
