#include<iostream>
using namespace std;

int dectobin (int n){
    int x=1;
    int ans=0;

    while (x<=n)
    x=x*2;
    x=x/2;

    while(x>0){
    int lastdg=n/x;
    n=n-lastdg*x;
    x=x/2;
    ans=ans*10+lastdg;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<dectobin(n)<<endl;
    return 0;
}