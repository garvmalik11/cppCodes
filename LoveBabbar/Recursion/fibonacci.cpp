#include<iostream>
using namespace std;

int fibb(int n){
    //base
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    int ans = fibb(n-1) + fibb(n-2);
    return ans;
}


int main(){
   int n = 5; 

   cout << fibb(n) << endl;
}