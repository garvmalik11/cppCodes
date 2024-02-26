#include<iostream>
#include<stack>
using namespace std;

void deleteMid(stack<int>& st, int count, int size){
    // Base case
    if(count == (size/2)){
        st.pop(); // Delete the middle element
        return;
    }

    int num = st.top();
    st.pop();

    deleteMid(st, count + 1, size);
    st.push(num);
}

int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    int count = 0;
    int size = st.size();

    deleteMid(st, count , size);

    // Print remaining elements
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    
    return 0;
}
