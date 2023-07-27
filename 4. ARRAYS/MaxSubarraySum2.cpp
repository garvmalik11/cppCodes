#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int currsum[n+1];
    currsum[0]=0;
    for(int i=1; i<=n; i++){
        currsum[i]=currsum[i - 1] + arr[i - 1];
    }
    int maxSum = INT_MIN;
    for(int i=1; i<=n; i++){
        int sum=0;
        maxSum=max(maxSum,currsum[i]);
        for(int j=1; j<i; j++){
            sum = currsum[i] - currsum[j-1];
            maxSum = max(sum, maxSum);
        }
    }
    cout << maxSum << endl;
    return 0;
}