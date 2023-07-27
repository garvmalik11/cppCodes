#include<iostream>
using namespace std;

int main(){

    int n,a=0,sum=0;
    cout<<"ENTER THE TIMES\n";
    cin>>n;
    while(a<=n){
        sum=sum+a;
        a++;
    }
    cout<<sum;
    return 0;
}