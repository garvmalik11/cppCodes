#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int currSum = 0;
    int maxSum = INT_MIN;

    for(int i=0;i<n;i++){
        currSum = currSum + arr[i];

        if(currSum > maxSum){
            maxSum = currSum;
        }
        if(currSum < 0){
            currSum = 0;
        }
    }

    cout << maxSum;


    return 0;
}