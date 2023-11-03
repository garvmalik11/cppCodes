#include<iostream>
using namespace std;

class Stack{
    public:
    int data;
    Stack* next;

    Stack(int d){
        this -> data = d;
        this -> next = NULL;
    }

    void push(int d, Stack* &head, Stack* &tail){
        if(head == NULL){
            Stack *S = new Stack(d);
            head = S;
            tail = S;
            return;
        }
        else{
            Stack *S = new Stack(d);
            tail->next = S;
            tail = S;
        }

    }
    void pop(Stack* &head, Stack* &tail){
        
        if(head == NULL){
            cout << "UNDERFLOW" << endl;
        }
        else if(head == tail){
            head = NULL;
            return;
        }
            Stack *temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            tail = temp;
    }

    int peek(Stack* &head, Stack* &tail){
        if(head == NULL){
            cout << "underflow";
            return -1;
        }
        else{
            return tail->data;
        }
    }
    bool isEmpty(Stack* &head, Stack* &tail){
        if(head == NULL){
            return 1;
        }
        else{
            return 0;
        }
    }
    void print(Stack* &head){
        if(head == NULL){
            cout << "Bhara HUa h";
        }
        else{
            Stack* temp = head;
            while(temp != NULL){
                cout << temp->data;
                temp = temp->next;
            }

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

    st.pop(head,tail);
    st.pop(head,tail);
    st.pop(head,tail);

    st.print(head);




    return 0;
}