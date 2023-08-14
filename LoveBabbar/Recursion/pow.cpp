#include <iostream>
using namespace std;

int power(int n, int a){

    if(n == 0){
    return 1;
    }

    int ans = a * power(n-1,a);
    return ans;
    
}


int main() {
    int a=5;
    int n;
    cin >>n;

    cout << power(n,a) <<endl;

    return 0;
}
