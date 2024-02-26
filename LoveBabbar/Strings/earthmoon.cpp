#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> array1 = {1, 2, 3, 4, 5};
    std::vector<int> array2 = {3, 4, 5, 6, 7};

    std::vector<int> result;
    
    for (int x : array1) {
        if (std::find(array2.begin(), array2.end(), x) == array2.end()) {
            result.push_back(x);
        }
    }

    // Print the result
    for (int element : result) {
        std::cout << element << " ";
    }

    return 0;
}
