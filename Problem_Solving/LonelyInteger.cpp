#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int a[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int k=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                a[n] = arr[i];
            }
        }  
    }


    return 0;
}
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
