#include<iostream>
using namespace std;

void TowerOfHanoi(int n, char source, char help, char dest){
    if(n == 0){
        return ;
    }
    TowerOfHanoi(n-1, source, dest, help);
    cout << "Move From " << source <<" To " << dest << endl;
    TowerOfHanoi(n-1, help, source, dest);
}

int main(){
    TowerOfHanoi(3,'A','B','C');
    return 0;
}