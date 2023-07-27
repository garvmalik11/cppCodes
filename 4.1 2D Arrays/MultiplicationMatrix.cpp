#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1,x2,x3;
    cin >> x1 >> x2 >> x3;
    int m1[x1][x2];
    int m2[x2][x3];
    
    for(int i=0; i<x1; i++){
        for(int j=0; j<x2; j++){
            cin >> m1[i][j];
        }
    }
    for(int i=0; i<x2; i++){
        for(int j=0; j<x3; j++){
            cin >> m2[i][j];
        }
    }

    int ans[x1][x3];
    for(int i=0; i<x2; i++){
        for(int j=0; j<x3; j++){
            ans[i][j] = 0;
        } 
    }

    for(int i=0; i<x1; i++){
        for(int j=0; j<x3; j++){
            for(int k=0; k<x2; k++){
                ans[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    for(int i=0; i<x1; i++){
        for(int j=0; j<x3; j++){
            cout << ans[i][j] << " ";
        } 
        cout << endl;
    }
    return 0;
}

// 3 4 3
// 2 4 1 2
// 8 4 3 6
// 1 7 9 5
// 1 2 3
// 4 5 6
// 7 8 9
// 4 5 6
// ans
// 33 42 51 
// 69 90 111 
// 112 134 156