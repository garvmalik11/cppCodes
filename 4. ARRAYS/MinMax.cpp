#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int min,max;
    max=arr[0];
    min=arr[n];

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }

cout<<"MAX IS "<<max<<endl;
cout<<"MIN IS "<<min<<endl;

}