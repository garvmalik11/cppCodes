#include<iostream>
#include<vector>
using namespace std;

    void print(int ans3[], int n){
        for(int i=0; i<n ; i++){
            cout << ans3[i] <<" ";
            }
    }

    void merge(int arr1[], int n, int arr2[], int m) {
        int arr3[m+n];
        int i=0, j=0, k=0;
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                arr3[k] = arr1[i];
                i++;
                k++;
            }
            else{
                arr3[k] = arr2[j];
                k++;
                j++;
            }
        }
        //copy 1st arr elements
        while(i<n){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        //copy 2bd arr elements
        while(j<m){
            arr3[k] = arr2[j];
            k++;
            j++;
        }
        print(arr3, 8);
    };


int main(){
    int m = 5;
    int arr1[5] = {1,3,5,7,9};
    int n = 3;
    int arr2[3] = {2,4,6};
    int arr3[8] = {0};

    merge(arr1, m, arr2, n);
    // print(arr3, 8);
    
}