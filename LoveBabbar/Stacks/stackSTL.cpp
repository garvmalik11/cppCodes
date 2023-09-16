#include<iostream>
#include<stack> 
using namespace std;
int main(){
    //creating stcak
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.pop();
    s.pop();
    s.pop();
    
    //top
    cout << s.top() << endl;

    if(s.empty()){
        cout << "EMPTY "<<  endl;
    }
    else{
        cout << "NOT EMPTY" << endl;
    }

    cout << s.size() << endl;

   
}