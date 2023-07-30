#include<iostream>
using namespace std;
int main(){
    int n = 5;
int arr[n] = {2,1,4,5,3};

for(int i=1; i<n; i++){
        int j=i-1;
        int temp = arr[i];

        for(; j>=0; j--){
            if(arr[j]>temp){
                //shift
                arr[j+1] = arr[j];
            }
            else{//ruk jao
                break;
            }
        }
        arr[j+1] = temp;
    }

    for(int i=0; i<n; i++){
    cout << arr[i]<<" ";
    }
}