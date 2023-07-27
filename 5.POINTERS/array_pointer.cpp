#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr=&a;

    cout<<*ptr<<endl;
    *ptr=20;
    cout<<a<<endl;

    int arr[]={100,20,30};
    cout<<*arr<<endl;

    // int *pt=arr;
    // for(int i=0;i<3;i++){
    //     cout<<*pt<<endl;
    //     pt++;
    // }

    for(int i=0;i<3;i++){
        cout<<*(arr+i)<<endl;
    }
    return 0;
}