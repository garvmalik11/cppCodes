#include<bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n){
    int currsum=0;
    int mxs=0;
    for(int i=0; i<n; i++){
        currsum = currsum + arr[i];
        if(currsum < 0){
            currsum = 0;
        }
        mxs=max(mxs,currsum);
    }
    return mxs;
} 

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int wrapsum=0;
    int nonwrapsum=0;

    nonwrapsum=kadane(arr,n);
    int totalsum=0;
    for(int i=0; i<n; i++){
        totalsum = totalsum + arr[i];
        arr[i] = -arr[i];
    }
    //warpsm = totalsum- negative of kadane
    wrapsum = (totalsum + kadane(arr,n));

    cout << max(nonwrapsum,wrapsum);
    return 0;
}