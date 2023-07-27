#include<iostream>
using namespace std;

int Fact(int n){
    if(n == 0){
        return 1;
    }
    int prev = Fact(n-1);
    return n*prev;
    
}

int main(){
    int n;
    cin >> n;
    cout << Fact(n) << endl;
}