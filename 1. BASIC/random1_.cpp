#include <iostream>
using namespace std;
int main(){
    int pm;
    for (int i = 0; i < 30; i++){
        if (i % 2 == 0)
            continue;
        if (pm == 0){
            break;
        }
        cout << "go out" << endl;
        pm = pm - 300;
    }
    return 0;
}