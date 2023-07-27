#include<iostream>
using namespace std;

int main(){
    int a=0,n,sum=0;
    cout<<"ENTER THE AMOUNT OF NUMBERS\n";
    cin>>n;
    while(a<=n){
        if(a%2==0){
            cout<<a<<","<<endl;
            sum=sum+a;
            
        }
        a++;
    }
    cout<<"SUM IS  =>"<<sum;
    return 0;
}