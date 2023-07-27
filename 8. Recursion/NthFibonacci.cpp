//0 1 1 2 3 5 8 13
//not sum only nth fibb number


#include<iostream>
using namespace std;

int fibb(int n){
    if(n==1 || n==0){
        return n;
    }
    int prevsum= fibb(n-1);
    return fibb(n-2)+prevsum;
};
int main(){
    int n;
    cin >>n;
    cout<<fibb(n)<<endl;
} 