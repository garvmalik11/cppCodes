#include<iostream>
using namespace std;

int decimalToBin(int num){
    int ans=0;
    int x=1;
    while(x>0){
        int y=num%10;
        ans=ans+x*y;
        x*=2;
        num=num/10;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<decimalToBin(n)<<endl;
    return 0;
}