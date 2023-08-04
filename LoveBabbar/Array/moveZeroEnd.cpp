#include<iostream>
using namespace std;

void moveZeroes(int nums[], int n) {
        // int n = 5;
        int nonzeroindex = 0;
        int nonZero =0 ;
        
        for(int i=0; i<n; i++){
            if(nums[i] != 0){
                swap(nums[i],nums[nonZero]);
                nonZero++;
            }
        }
        for(int i=0; i<n;i++){
            cout << nums[i] <<" ";
        }
    }


int main(){
    int n= 5;
    int arr[5] = {0,2,0,4,5};
    moveZeroes(arr, n);
}