#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=2;              //start from 2
    int pd=arr[1]-arr[0];  //previous difference
    int j=2;              //j for while loop
    int curr=2;          //current

    while(j<n){
        if(pd == arr[j]-arr[j-1]){
            curr++;
        }
        else{
            pd=arr[j]-arr[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<ans<<endl;

    return 0;
}
//7
//10 7 4 6 8 10 11
//ans4