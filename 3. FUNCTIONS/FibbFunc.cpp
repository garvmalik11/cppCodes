#include<iostream>
using namespace std;

void fibb(int num){
    int t1=0;
    int t2=1;
    int nextTerm;
    for(int i=1;i<=num;i++){
        nextTerm=t1+t2;
        cout<<t1<<" ";
        t1=t2;
        t2=nextTerm;
    }
}

int main(){
    int n;
    cin>>n;

    fibb(n);
    return 0;
}