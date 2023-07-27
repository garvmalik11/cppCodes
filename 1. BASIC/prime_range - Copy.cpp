#include<iostream>
using namespace std;
int main(){
    int a,b,i,n=2;
    cout<<"ENTER RANGE"<<endl;
    cin>>a>>b;
    for(i<=a;i<=b;i++){
        for(n=2;n<i;n++){
            if(i%n==0){
                break;
            }
        }
        if(n==i){
            cout<<n<<"\n";
        }
    }
    return 0;
}
