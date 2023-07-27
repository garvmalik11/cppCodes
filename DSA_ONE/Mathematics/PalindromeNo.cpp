#include<iostream>
using namespace std;
int main(){
    int n;
    int ans = 0;
    cin >> n;
    int temp = n;
    int ld;

    while(n!=0){
    ld = n % 10;
    ans = ans * 10 + ld;
    n = n/10;
    }       

    if(ans == temp){
        cout << "YES"<<endl;
    }
    else{
        cout << "N0"<<endl;
    }

    return 0;
}