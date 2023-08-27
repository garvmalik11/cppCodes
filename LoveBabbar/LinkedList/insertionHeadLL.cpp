#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        data = d;
        this -> next = NULL;
    }

};
    void insertAtHead(Node* &head, int d){
        Node* temp = new Node(d);
        temp -> next = head;
        head = temp;
    }

    void printit(Node* &head){
        Node* temp = head;

        while(temp!=NULL){
        cout << temp -> data << " ";
        temp =temp->next;
        }
        cout << endl;
    }

int main(){

    Node* node1 = new Node(2);

    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    
    Node* head = node1;
    printit(head);

    insertAtHead(head, 12);
    printit(head);

    insertAtHead(head, 15);
    printit(head);
    
    insertAtHead(head, 18);
    printit(head);
    
    return 0;
}