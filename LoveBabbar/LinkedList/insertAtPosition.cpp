#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

void insertBegin(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertEnd(Node* &tail, int d){
    Node* temp = new Node(d);
    tail-> next = temp;
    // temp-> next = NULL;
    tail = temp;

}
void insertmid(Node* &head,Node* &tail, int position, int d){
    Node*temp = head;
    int count = 1;

    if(position == 1){
        insertBegin(head,d);
        return;
    }

    while(count < position-1){
        temp = temp->next;
        count ++;
    }
    if(temp->next == NULL){
        insertEnd(tail,d);
        return;
    }
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp-> next;
    temp-> next = nodeToInsert;

}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        // cout << temp <<" ";
        // cout << temp->next <<" ";
        temp = temp->next;
    }
    cout << endl;
}


int main(){

    Node* node1 = new Node(1);

    Node* head = node1;
    Node* tail = node1;

    insertEnd(tail, 3);
    print(head);
    insertEnd(tail, 4);
    print(head);
    insertEnd(tail, 5);
    print(head);

    insertmid(head,tail,1,2);
    insertmid(head,tail,6,10);
    print(head);

    cout << "head "<< head->data <<endl;
    cout << "tail "<< tail->data <<endl;


    return 0;
}