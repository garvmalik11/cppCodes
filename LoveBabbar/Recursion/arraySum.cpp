#include <iostream>
using namespace std;

int sum(int arr[], int n){
    if(n <= 0){
        return 0;
    }

    int currSum = arr[0];
     int remSum = sum(arr + 1, n - 1);

    return(currSum + remSum);

}


int main() {
    int arr[5] = {1,2,3,4,5};
cout << sum(arr, 5)<<endl;
}
