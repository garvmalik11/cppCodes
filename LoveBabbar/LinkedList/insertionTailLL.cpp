#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        data = d;
        next = NULL;
    }

};

void insertHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp-> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
void insertTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
    // temp -> next = NULL;
}
int main(){

    Node* node1 = new Node(2);

    Node* head = node1;
    Node* tail = node1;

    insertTail(tail,3);
    print(head);
    
    insertTail(tail,4);
    print(head);


    return 0;
}