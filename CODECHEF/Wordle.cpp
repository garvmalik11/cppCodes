#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string S,T;
	    cin >> S;
        cin >> T;
	    for(int i=0;i<S.size();i++){
	        if(S[i]==T[i]){
	            cout<<'G';
	        }
	        else{
	            cout<<'B';
	        }
	    }
        cout << endl;

	}
	return 0;
}
// 3
// ABCDE
// EDCBA
// ROUND
// RINGS
// START
// STUNT