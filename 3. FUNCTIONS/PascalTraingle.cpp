//1
//121
//1331
//14641

#include<iostream>
using namespace std;

int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}

int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j));
        }
        cout<<endl;
    }
    return 0;
}