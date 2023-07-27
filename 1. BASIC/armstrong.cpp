#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int sum=0,n;

    cout<<"ENTER N: ";
    cin>>n;
    int originaln=n;
    while(n>0){
        int ld=n%10;
        sum+=pow(ld,3);
        n=n/10;
    }
    cout<<sum<<endl;
    if(sum==originaln){
    cout<<"ARMSRONG";
    }
    else{
    cout<<"NOT ARMSTRONG";
    }
}