#include<iostream>
using namespace std;

int partition (int arr[], int s, int e){
    int pivot = arr[s];
    int count = 0;

    for(int i=s+1;i<=e;i++){
        if(arr[i]<pivot)
            count ++;
    }
    
    int pivotIndex = s + count;
    swap(arr[pivotIndex],arr[s]);

    int i=s;
    int j=e;

    while(i<pivotIndex && j>pivotIndex){

        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        while(i<pivotIndex && j>pivotIndex){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quicksort(int arr[], int s, int e){

    //base
    if(s>=e){
        return ;
    }

    int p = partition(arr, s , e);

    //left
    quicksort(arr, s, p-1 );
    //right
    quicksort(arr, p+1 , e);
    
}

int main(){
    int arr[5] = {5,10,11,2,1};
    quicksort (arr, 0, 4);

    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
}
}