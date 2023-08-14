#include <iostream>
using namespace std;

bool find(int arr[], int n,int k){
    if(n == 0){
        return 0;
    }
    
    if(arr[0]==k){
    return 1;
    }
    else{
    bool remainingArr = find(arr+1, n-1,k);
    return remainingArr;
    }

}


int main() {
    int arr[5] = {1,2,3,4,5};
cout << find(arr, 5, 6)<<endl;
}
