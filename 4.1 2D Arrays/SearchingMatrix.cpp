#include<bits\stdc++.h>
using namespace std;
int main(){
    int r,c;
    cin >> r >> c;
    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; i++){
            cin >> arr[i][j];
        }
    }
    int k;
    cin >> k;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; i++){
            if(arr[i][j] == k){
                cout << "PRESENT" << endl;
                break;
            }
        }
    }

    
    return 0;
}