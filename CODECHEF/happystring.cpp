#include<bits/stdc++.h>
using namespace std;

int vowel(char s){
    char v[5]={'a','e','i','o','u'};
    for(int i=0;i<5;i++){
        if(s==v[i]){
            return 1;
        }
    }
    return 0;
}


int main(){
int t;
cin >> t;
while (t--)
{
    string s;
    cin >> s;
    bool ans=false;

    for(int i=0;i<s.size();i++){
        if (vowel(s[i])){
            if(vowel(s[i+1]) && vowel(s[i+2]) )
                ans=true; 
        }
    }
    if(ans){
        cout<<"Happy"<<endl;
    }
    else{
        cout << "Sad"<<endl;
    }
}
}

