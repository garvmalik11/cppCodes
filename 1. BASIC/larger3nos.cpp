#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    cout<<"Enter Three Numbers\n";
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<"a="<<a<<" is largest\n";
        }
        else{
            cout<<"C"<<c<<" IS LARGEST\n";
        }
    }
    else if(b>a){
        if(b>c){
            cout<<"b="<<b<<" is largest\n";
        }
        else{
            cout<<"c="<<c<<" IS LARGEst";
        }
    }
    return 0;
}