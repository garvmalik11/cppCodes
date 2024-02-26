#include <bits/stdc++.h> 

void solve(stack<int>&myStack, int x){
    if(myStack.empty()){
        myStack.push(x);
        return;
    }

    int saved = myStack.top();
    myStack.pop();

    solve(myStack, x);
    myStack.push(saved);
}


stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    int count = 0;
    solve(myStack, x);

    return myStack;
}
