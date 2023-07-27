#include<iostream>
using namespace std;

int fact(int n){
    if (n == 0){
        return 1;
    }
    int result = n * fact(n-1);
    return result;
};
int main(){
    int n;
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}