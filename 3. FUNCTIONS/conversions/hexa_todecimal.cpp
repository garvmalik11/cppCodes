#include<iostream>
using namespace std;

int Binarytodecimal(int n){
    int x=1;
    int ans=0;
    while(x>0){
        int y=n%10;
        ans+=x*y;
        x*=2;
        n=n/10;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<Binarytodecimal(n)<<endl;
    return 0;
}