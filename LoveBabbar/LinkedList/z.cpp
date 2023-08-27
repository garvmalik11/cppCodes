#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertBegin(Node* &head,Node* &tail, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
    Node* temp = new Node(d);
    head -> prev = temp;
    temp->next = head;
    head = temp;
    }

}

void insertEnd(Node* &head,Node* &tail,int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    }
}

void insertPosition(Node* &head, Node* &tail,int position, int d){
    Node* temp = head;
    int count = 1;


    if(position == 1){
        insertBegin(head, tail,d);
        return;
    }

    while(count < position){
        temp = temp->next;
        count++;
    }
    if(temp->next == NULL){
        insertEnd(head,tail,d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert-> prev = temp;
    nodeToInsert-> next = temp->next;
    temp->next = nodeToInsert;
    temp-> next-> prev = nodeToInsert;

}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){

    Node* node1 = new Node(1);

    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    insertBegin(head,tail, 0);
    print(head);
    insertBegin(head,tail, -1);
    print(head);

    insertEnd(head,tail, 4);
    print(head);
    insertEnd(head,tail, 5);
    print(head);

    insertPosition(head,tail,1,1);
    print(head);


    return 0;
}