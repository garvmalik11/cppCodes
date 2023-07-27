//|    *
//|   **
//|  ***
//| ****
//|*****
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"ENTER VALUE FOR N";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}