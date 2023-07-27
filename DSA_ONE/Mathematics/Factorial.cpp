#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int fact = 1;
    if (n == 0){
        cout << "1";
    }
    else{
        for (int i = 1; i <=n; i++){
            fact = fact * i;
        }
    }

    cout << fact << endl;
    return 0;
}