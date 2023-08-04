#include<iostream>
using namespace std;

void reverse(char str[], int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        swap(str[s],str[e]);
        s++;
        e--;
    }
    cout << str << endl;

}

int main(){
    char str[20];
    cout << "Enter Name" <<endl;
    cin >> str;

    cout << reverse(str, 20) << endl;
}
