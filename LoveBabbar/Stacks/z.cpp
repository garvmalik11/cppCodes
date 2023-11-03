#include<iostream>
using namespace std;

class Stack{
    public:
    int top;
    int* arr;
    int size;

    Stack(int s){
        this->size = s;
        arr = new int[s];
        top = -1;
    }

    void push(int elem){    
        if(size - top > 0){
            top++;
            arr[top] = elem;
        }
        else{
            cout <<"Underflow";
        }
    }
    void pop(){
        if(top == -1){
            cout <<"Stack Underflow"<<endl;
        }
        else{
            top--;
        }
    }
    int peek(){
        if(top == -1){
            cout<<"Underflow"<<endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }
    bool isEmpty(){
        if(top = -1){
            return 1;
        }
        else{
            return 0;
        }
    }

};

int main(){
    Stack s(5);

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(5);
    s.pop();
    cout << s.peek() << endl;
 

}