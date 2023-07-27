#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool isPrime[n+1];

    for(int i=0;i<n;i++){
        isPrime[i] = 1;
    }
    isPrime[0] = 0;
    isPrime[1] = 0;

    
    for(int i=2; i*i<=n; i++){
        for(int j=2*i;j<n;j=j+i){
            isPrime[j] = false;
        }
    }
    for (int i = 0; i <n; i++){
        if(isPrime[i]==1){
            cout << i << endl;
        }
    }
    return 0;
}