#include<iostream>
using namespace std;

int findPivot(vector<int>& arr, int n, int k, int s, int e){
    int mid = s+(e-s)/2;
    while(s<e){
        mid = s + (e-s)/2;

        if(arr[0] <= arr[mid]){
            s = mid +1 ;      
        }
        else{
            e = mid;
        }
    }
    return s;
}

int binarySearch(vector<int>& arr, int n, int k, int s, int e){
    int mid = s + (e-s)/2;
    while(s<=e){
        mid = s+ (e-s)/2;
        if(arr[mid] > k){
            e = mid-1;
        }
        else if (arr[mid] < k){
            s = mid+1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int search(vector<int>& arr, int n, int k)
{
    int s = 0;
    int e = n-1;
    int pivot = findPivot(arr,n,k,s,e);

        if( k<=arr[n-1] && k>=arr[pivot]){
            return binarySearch(arr,n,k,pivot,e);
        }
        else{
           return binarySearch(arr,n,k,s,pivot-1);
        }
}

int main(){
    int arr[5] = {7,9,1,2,3};
    int n =5 ;
    int k=3;
    cout << search(arr,n,k) << endl;
}
