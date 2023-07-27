//Moores Majority Voting Algorithm//

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int ansIndex = 0;
    int count = 1;

    for(int i=1;i<n;i++){
        if(arr[i]==arr[ansIndex]){
            count++;
        }
        else{
            count --;
        }
        if(count == 0){
            ansIndex= i;
            count =1;
        }
    }
    int count2=0;
    for(int i=0;i<=n;i++){
        if(arr[i]== arr[ansIndex]){
            count2++;
        }
    }
    if(count2 > (n/2)){
        cout<< arr[ansIndex];
    }
    else{
        cout<< "-1";
    }

}