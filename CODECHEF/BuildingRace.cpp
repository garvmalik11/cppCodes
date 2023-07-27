#include <iostream>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int a,b,x,y;
	    cin >>a>>b>>x>>y;
	    
        double chef=a/x;
        double chefina=b/y;

        if(chef<chefina){
            cout<<"chef"<<endl;
        }
        else if(chefina<chef){
            cout<<"chefina"<<endl;
        }
        else{
            cout<<"both"<<endl;
        }

        }
	return 0;
}
