#include<iostream>
using namespace std;

int fibb(int n){
    if (n == 0 || n == 1){
        return n;
    }
    int result = fibb(n-1) + fibb(n-2);
    return result;
};

int main(){
    int n;
    cin >> n;
    cout << fibb(n) << endl;
    return 0;
}