#include <iostream>
using namespace std;

bool checkP(string s, int i, int j){
    if (i >= j)
        return true;

    if (s[i] != s[j]) {
        return false;
    } else {
        return checkP(s, i + 1, j - 1);
    }
}

int main() {
    string s = "abcde";
    int i = 0;
    int j = s.length() - 1;

    bool isPalindrome = checkP(s, i, j);

    if (isPalindrome) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
