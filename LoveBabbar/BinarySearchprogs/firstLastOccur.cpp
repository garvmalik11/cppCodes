#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return ans;
}

int lastOcc(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return ans;
}

int main() {
    int arr[5] = {1, 2, 3, 3, 5};
    cout << "First Occurrence of 3 = " << firstOcc(arr, 5, 3) << endl;
    cout << "Last Occurrence of 3 = " << lastOcc(arr, 5, 3) << endl;

    return 0;
}
