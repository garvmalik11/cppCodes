#include<iostream>
using namespace std;
#include<stack>

int main(){
    stack<char> st;
    string str = "garv";

    for(int i=0;i<str.length();i++){
        char ch = str[i];
        st.push(ch);
    }
    string ans = "";

    for(int i=0;i<str.length();i++){
        char ch = st.top();
        ans.push_back(ch);
        st.pop();
    }
    cout << ans;
} 