#include<iostream>
using namespace std;
int main(){
    int a,s=2;
    cout<<"ENTR A NUMBER: ";
    cin>>a;
    for(s=2;s<a;s++){
        if(a%s==0){
            cout<<"not prime";
            break;
        }
    }
    if(s==a){
        cout<<"PRIME";
    }

    return 0;
}