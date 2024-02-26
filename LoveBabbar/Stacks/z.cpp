#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<char> st;

    st.push('m');
    st.push('v');
    st.push('r');
    st.push('a');
    st.push('g');
    
    // st.pop();

    cout << st.empty();
    cout << st.top();
    cout << st.size();



    return 0;
}