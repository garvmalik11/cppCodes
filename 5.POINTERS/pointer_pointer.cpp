#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr;
    ptr=&a;

    cout<<*ptr<<endl;
    int **g;
    g=&ptr;

    cout<<ptr<<endl;
    cout<<**g<<endl;
    **g=12;
    cout<<a<<endl;
   //value of a is changed!!
    return 0;
} 