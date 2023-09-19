//array

#include<iostream>
#include<Stack> 
using namespace std;

class Stack {
    public:
    //data
    //propertird
    int top;
    int *arr;
    int size;

    Stack(int size){
        this-> size = size;
        arr = new int[size];
        top = -1;
    }


    //behaviour
    void push(int size){
        if(size - top > 1){
        top++;
        arr[top] = size;    
        }
        else{
            cout << "StackOverflow";
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout << "StackUnderlow";
        }
    }

    bool isempty(){
        if(top == -1){
            return 1;
        }
        else{
        return 0;
        }
    }

    int peek(){
        if(top == -1){
            return -1;
        }
        else{
        return arr[top];
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
st.push(5);

cout << st.peek() << endl;

st.pop();
st.pop();
st.pop();
st.pop();
st.pop();
   
cout << st.peek() << endl;
cout << st.isempty() << endl;
}