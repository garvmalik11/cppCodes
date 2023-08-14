#include<iostream>
using namespace std;

void sayDigits(int n, string arr[]){

    if(n == 0){
        return ;
    }

    //processing
    int digit = n%10;
    n = n/10;
 
 //rr
    sayDigits(n, arr);


    cout << arr[digit] <<" ";
}


int main(){
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n = 415; 
    sayDigits(n, arr);
}