#include <iostream>
#include<cctype>
using namespace std;
int main()
{

    string pass;
    cin >> pass;
    int n = pass.length();
    int invalid = 0;

    if (n < 4){
        invalid++ ;
    }

    if(isdigit(pass[0])){
        invalid++ ;
    }

    bool hasupper = 0;
    bool haslower = 0;
    bool hasnum = 0;
    bool hasspecial = 0;

    for(int i=0; i<n; i++){
        if(isupper(pass[i])){
            hasupper = 1;
        }
        if(islower(pass[i])){
            haslower = 1;
        }
        if(isdigit(pass[i])){
            hasnum = 1;
        }
        if(!(isalnum(pass[i]))){
            hasspecial = 1;
        }
    }
    
    if(hasupper && haslower && hasnum && hasspecial && invalid == 0){
        cout << "Y" <<endl;
    }
    else{
        cout << "N";
    }



    cout << pass;
}