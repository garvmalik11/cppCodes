#include<iostream>
using namespace std;
int main(){
    int n,s=2,f;
    cout<<"ENTER A NUMBER "<<endl;
    cin>>n;
    for(s=2;s<n;s++){
        if(n%s==0){
            f=1;
        }
    }
    if (f==1){
        cout<<n<<" is not prime";
    }
    else{
        cout<<n<<" is prime";
    }
    
    return 0;
}