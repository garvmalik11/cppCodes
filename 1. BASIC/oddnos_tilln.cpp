#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"ENTER LAST NUMBER  ";
    cin>>n;
    for(i=0;i<=n;i++){
        if(i%2==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}