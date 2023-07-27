#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
        int x = n%7;
        int ans = n/7;
        if(x==6){
            cout << ans+1 <<endl;
        }
        else{
            cout << ans << endl;
        }
    }
	return 0;
}
//
