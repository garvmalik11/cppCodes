// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int arr[5] = {7 , 9 , 1 , 2 ,3};
  int s = 0;
  int e =4;
  int mid = s + (e-s)/2;
    while(s<e){
        mid = s + (e-s)/2;

        if(arr[0] <= arr[mid]){
            s = mid +1 ;      
        }
        else{
            e = mid;
        }
        
    }
    cout << arr[s];
}