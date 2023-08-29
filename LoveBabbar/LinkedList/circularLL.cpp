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

    // ~Node(){
    //     int value = this->data;
    //     if(this->next != NULL){
    //         delete next;
    //         next = NULL;
    //     }
    //     cout << "memory Is Now Free "<<endl;
    // }
};

void insertNode(Node* &tail, int element,int d){
    if(tail == NULL){
        Node* newnode = new Node(d);
        newnode->next = newnode;
        tail = newnode;
    }
    else{
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }

        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;        
    }
}

void print(Node* tail){
    Node* temp = tail;

    do{
        cout << temp->data << " ";
        temp = temp->next;
    }
    while(temp != tail);
    cout << endl;
}




int main(){
    Node* tail = NULL;

    insertNode(tail,1,2);
    print(tail);

    insertNode(tail,2,3);
    print(tail);

    insertNode(tail,3,4);
    print(tail);

    insertNode(tail,4,5);
    print(tail);
}