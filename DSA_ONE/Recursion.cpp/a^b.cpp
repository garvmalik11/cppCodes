#include<iostream>
using namespace std;

int power(int a, int b){
    if(b==0){
        return 1;
    }
    int result = a * power(a,b-1);
    return result;
};

int main(){
    int a,b;
    cin >> a >> b;
    cout << power(a,b) <<endl;
    return 0;
}