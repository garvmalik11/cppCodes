#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int key){
    int start,end,mid;
    start=1;
    end=n;

    while (start<=end){
        mid= (start+end) /2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
    }
    return -1; 
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;
    cout<<binarysearch(arr,n,key)<<endl;
}