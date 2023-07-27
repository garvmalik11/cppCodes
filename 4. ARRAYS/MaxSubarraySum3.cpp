//KADANES ALGORITHM
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int maxSum=0;
    int currsum=0;
    for(int i=0; i<n; i++){
        currsum = currsum + arr[i];
        if(currsum < 0){
            currsum=0;
        }
        maxSum = max(maxSum, currsum);
    }
    cout << maxSum << endl;
    return 0;   
}