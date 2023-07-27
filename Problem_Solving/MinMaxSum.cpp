#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int arr[5];
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }

    int counter=1;
    while(counter<5){
        for(int i=0; i<5-counter; i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
//int overflow
    long long int total=0;
    long long int min = 0;
    long long int max = 0;

    for(int i=0 ; i<5; i++){
        total += arr[i];
    }
    // cout << total << endl;
    min = total - arr[4];
    max = total - arr[0];

    cout << min <<" "<<max << endl;
    return 0;
}