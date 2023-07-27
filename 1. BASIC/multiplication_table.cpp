#include<iostream>
using namespace std;
int main(){

    int a,t;
    cout<<"ENTER A NUMBER TO PRINT ITS TABLE\n";
    cin>>a;
    for(int i=1;i<10;i++){
        t=a*i;
        cout<<a<<"*"<<i<<"=";
        cout<<t<<endl;
    }

    return 0;
}