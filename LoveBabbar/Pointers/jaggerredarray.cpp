#include <iostream>
using namespace std;

int main() {
    int row = 3;
    int col[] = {1, 2, 3};

    int **arr = new int *[row];
    for (int i = 0; i < row; i++) {
        arr[i] = new int[col[i]];
    }

    // Input
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col[i]; j++) {
            cin >> arr[i][j];
        }
    }

    // Output
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory
    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
