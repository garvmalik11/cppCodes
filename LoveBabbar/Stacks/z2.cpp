#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Stack{
    public:
    int data;
    Stack* next;

    Stack(int d){
        this -> data  = d;
        next = NULL;
    }

    void push(int d, Stack* &head, Stack* &tail){
        if(head == NULL){
            Stack* temp = new Stack(d);
            head = temp;
            tail = temp;
            return;
        }
        else{
            Stack *temp = new Stack(d);
            tail-> next = temp;
            tail = temp;
        }
    }

    void pop(Stack* &head, Stack* &tail){
        if(head == NULL){
            cout << "underflow";
        }
        else if(head == tail){
            head = NULL;
            return;
        }
        else{
            Stack* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            tail = temp;
        }
    }

    int peek(Stack* &head, Stack* &tail){
        if(head == NULL){
            return -1;
        }
        else{
            return tail->data;
        }
    }

};

int main(){
    Stack st(1);
    Stack *head = &st;
    Stack * tail = &st;

    cout << st.peek(head, tail) << endl;

    st.push(1,head,tail);
    st.push(2,head,tail);
    st.push(3,head,tail);
    cout << st.peek(head, tail) << endl;
    st.push(4,head,tail);
    st.push(4,head,tail);


    return 0;
}