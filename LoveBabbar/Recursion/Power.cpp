#include <iostream>
using namespace std;

int power(int a, int b){
    if(b == 0){
        return 1;
    }
    if(b == 1){
        return a;
    }
    //rr
    int ans = power(a, b/2);

    if(b%2 == 0){
        return ans*ans;
    }
    else{
        return a*ans*ans; 
    }
}

int main() {
    int a =2;
    int b = 10;

    int ans = power(a,b);
    cout << ans << endl;

    return 0;
}
