#include<iostream>
using namespace std;

// int FirstOcc(int arr[], int n, int key, int i){
//     if(i == n){
//         return -1;
//     }
//     if(arr[i] == key){
//         return i;
//     }
//     return FirstOcc(arr, n, i+1, key);
// }

int LastOcc(int arr[], int n, int key, int i){
    int rest_arr = LastOcc(arr, n, i+1, key);
    if(rest_arr != -1){
        return rest_arr;
    } 
    if(arr[i] == key){
        return i;
    }
    return -1;
}


int main(){
    return 0;
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int key;
    cin >> key;
    // int i = 0;
    //cout << FirstOcc(arr, n, key, 0) << endl;
    cout << LastOcc(arr, n, key, 0) << endl;
}
