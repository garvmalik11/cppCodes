#include<iostream>
#include<stack>
using namespace std;

int main(){

    string s = "garv";
    stack<char> st;
    
    for(int i=0; i<s.length(); i++){
        char a = s[i];
        st.push(a);
    }

    string ans ="";
    while(!st.empty()){
        char ch = st.top();
        ans.push_back(ch);
        st.pop();
    }

    cout << ans;
}