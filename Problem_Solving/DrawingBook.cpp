#include<bits/stdc++.h>
using namespace std;
int main(){
    int no, p;   
    cin >> no;
    cin >> p;
        
    int ans = 0;
    
    ans = (p/2);
    int ans2=0;
    
    ans2 = no-p-1;


    if(no==1 || p==no){
        cout<<0;
    }
    else if(ans2<ans){
        cout<<ans2;
    }
    else{
        cout<<ans;
    }
    // cout << ans << endl;
    // cout << ans2;
}