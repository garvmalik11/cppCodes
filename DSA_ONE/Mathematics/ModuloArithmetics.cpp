#include<iostream>
using namespace std;

long fastpower(long a,long b, int n){
    long ans = 1;
    while(b > 0){
        if((b&1)!=0){ //b%2!=0
            ans = (ans * a%n)%n;
        }
        a =( a%n * a%n)%n;
        b = b>>1; //b/2 meaning
    }
    return ans;
};

int main(){
    int a,b;
    cin >> a >> b;
    
    return 0;

}