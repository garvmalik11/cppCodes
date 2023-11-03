#include<iostream>
#include<stack>
using namespace std;

int main(){

    string s = "garv";

     stack <char> stk;
        for(int i=0;i<s.size();i++){
            char ch = s[i];
            stk.push(ch);
        }
        
        string ans;
        while(!stk.empty()){
            char ch = stk.top();
            ans.push_back(ch);

            stk.pop();
        }
        for(int i=0;i<s.size();i++){
        cout << ans[i];
        }
        
}