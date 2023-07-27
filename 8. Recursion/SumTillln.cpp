#include <iostream>
using namespace std;

int SumTilln(int n){
    if (n == 0){
        return 0;
    }
    int sum;
    sum = n + SumTilln(n-1);
    return sum;
}

int main(){
int n;
cin >> n;

cout<<SumTilln(n)<<endl;

}