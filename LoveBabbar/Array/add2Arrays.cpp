#include <bits/stdc++.h> 

using namespace std;

vector<int> reverse(vector<int> v) {
    int s = 0;
    int e = v.size() - 1; // Adjusted to point to the last element

    while (s <= e) {
        swap(v[s], v[e]);
        s++;
        e--;
    }

    return v;
}

vector<int> findArraySum(vector<int>& a, int n, vector<int>& b, int m) {
    int i = n - 1; // Adjusted to point to the last element
    int j = m - 1; // Adjusted to point to the last element

    vector<int> ans;
    int carry = 0;

    while (i >= 0 && j >= 0) {
        int sum = a[i] + b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    while (i >= 0) {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    while (j >= 0) {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }

    while (carry != 0) {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    return reverse(ans);
}
