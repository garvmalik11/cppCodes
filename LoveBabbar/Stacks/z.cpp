#include<iostream>
using namespace std;

class Stack {
    public:
    int size;
    int top;
    int *arr;

    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }     

    void push(int data){
        if(size - top > 1){
            top++;
            arr[top] = data;
        }
        else{
            cout << " Stack Overflow " << endl;
        }
    }  
    void pop(){
        if(top == -1){
            cout << "Stack UNderflow " << endl;
        }
        else{
            top--;
        }
    }
    int peek(){
        if(top == -1){
            cout << "Stack UNderflow " << endl;
            return -1;
        }
        else
            return arr[top];
    }
    
    bool isempty(){
        if(top == -1){
            return 1;
        }
        else{
            return 0;
        }
    }
};


int main(){
    Stack st(5);

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout << st.peek() << endl;

    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    
    cout << st.peek() << endl;
    if(st.isempty()){cout<<"empty";}
}