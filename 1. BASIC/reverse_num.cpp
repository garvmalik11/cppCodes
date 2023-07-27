#include<iostream>
using namespace std;
int main(){
    int reverse=0;
    int lastdg;
    int n;
    cout<<"ENTER A NO";
    cin>>n;
    while(n>0){
        lastdg=n%10;
        reverse=reverse*10+lastdg;
        n=n/10;
    }
    cout<<reverse;
    return 0;
}