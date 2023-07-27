//Write a program to print all prime numbers in a given range
#include <iostream>
using namespace std;
int main(){
    int a,b,n,i=2;
    cout<<"ENTER RANGE";
    cin>>a,b;  
    cin>>n;
    for(a=0;a<b;a++){
        for(i=2;i<n;i++){
            if(n%i==0){
                break;
            }
        }
        if(n==1){
            cout<<n<<endl;
        }
    }
    return 0;
}