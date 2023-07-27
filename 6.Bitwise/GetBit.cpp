#include<bits/stdc++.h>
using namespace std;

int GetBit(int no, int pos){
    int mask = 1 << pos;
    return((no & mask)!=0);   
}

int main(){
    int n;
    cin >> n;
    int i;
    cin >> i;
    cout << GetBit(n,i) << endl;    

}

//5=0101