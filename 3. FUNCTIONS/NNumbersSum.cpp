#include<iostream>
using namespace std;

int sum(int num){
    int s=0;
    for(int i=1;i<=num;i++){
        s+=i;
    }
    return s;
}

int main(){
    int n,add=0;
    cin>>n;
    add=sum(n);
    cout<<add;
}