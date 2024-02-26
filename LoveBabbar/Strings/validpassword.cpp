#include<iostream>
using namespace std;
int main(){

    string pass;
    cin >> pass;
    int n = pass.length();
   if(n < 4){
    cout << "0";
   }
   for(int i=0;i <n; i++){
    if(pass[i] == ' ' || pass[i]== '/'){
        cout << "0";
    }

    }

    cout << pass;

}