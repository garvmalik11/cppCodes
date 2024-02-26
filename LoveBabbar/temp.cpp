#include <iostream>
#include <vector>

int solve(const std::vector<int>& ar) {
    // Initially assuming the number of movements needed to paint all the floors is 1
    int movement = 0;

    // Initializing an integer variable i with 0
    int i = 0;

    // While loop runs until the size of ar is greater than the value of i
    while (i < ar.size()) {
        // Checking whether the ith element of ar satisfies condition 0 <= ith element of ar <= 1 or not
        if (ar[i] >= 0 && ar[i] <= 1) {
            // If the element of ar is equal to 1
            if (ar[i] == 1) {
                // then increase the movement by 1
                movement++;

                // also increase the value of i by 1
                i++;
            }
            // If the element of ar is not equal to 1
            else {
                // then we have to take the lift
                for (int j = i; j < ar.size(); j++) {
                    // If the element of ar is again equal to 0
                    if (ar[i] >= 0 && ar[i] <= 1) {
                        // Again checking whether the ith element of ar satisfies condition 0 <= ith element of ar <= 1 or not
                        if (ar[j] == 0) {
                            // then we have to go to the next floor
                            i++;
                        }
                        // else element of ar is equal to 1
                        else {
                            // then we have to increase the movement by 1
                            movement++;

                            // and we have to stop the lift
                            break;
                        }
                    }
                    // if the condition is not satisfied
                    else {
                        // then return 0
                        return 0;
                    }
                }
            }
        }
        // if the condition is not satisfied
        else {
            // then return 0
            return 0;
        }
    }

    // returning the number of movements needed to paint the floors
    return movement;
}

int main() {
    // Example usage:
    std::vector<int> ar = {1,1,0,0,1};
    int result = solve(ar);
    std::cout << "Number of movements needed: " << result << std::endl;

    return 0;
}