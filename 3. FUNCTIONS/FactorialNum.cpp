#include<iostream>
using namespace std;

void fact(int num){
    int factorial=1;
     for(int i=1;i<=num;i++){
        factorial=factorial*i;
    }
    cout<<factorial<<endl;
}

int main(){
    int n;
    cin>>n;
    fact(n);
    return 0;
}