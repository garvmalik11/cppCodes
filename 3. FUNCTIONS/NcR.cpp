#include<iostream>
using namespace std;

int fact(int num){
    int f=1;
    for(int i=1;i<=num;i++){
        f=f*i;
    }
    return f;
}

int main(){
    int n,r;
    int ncr;
    cin>>n>>r;
    ncr=fact(n)/(fact(n-r)*fact(r));

    cout<<ncr<<endl;
    return 0;

}