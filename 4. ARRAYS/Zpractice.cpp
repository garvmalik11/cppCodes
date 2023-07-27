#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,z;
	    cin >> n;
	    vector<int>a(10);
	    for(int i=0;i<=n;i++){
	        cin >> z;
	        a[z]++;
	    }
	    vector <int>a2=a;
	    sort(a2.begin(),a2.end());
	    if(a2[10]>a2[9]){
	        for(int i=0;i<11;i++){
	            if(a[i]==a2[10]){
	                cout<<i<<endl;
	            }
	        }
	        else{
	            cout<<"CONFUSED"<<endl;
	        }
	    }
	}
	return 0;
}
