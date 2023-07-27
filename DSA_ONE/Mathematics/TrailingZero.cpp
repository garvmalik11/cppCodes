#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 0;
    for(int i=5; i<=n; i=i*5){
        ans = ans + n / i;
    }
    cout << ans << endl;
    return 0;
}