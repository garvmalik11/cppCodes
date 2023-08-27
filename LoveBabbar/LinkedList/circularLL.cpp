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

    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout << "memory Is Now Free "<<endl;
    }
};

insertNode(Node* &tail,int element,int d){
    if(tail == NULL){
        Node* newnode = new Node(d);
        tail = newnode;
    }
    else{
        Node* temp = new Node(d);
        while(temp->data == element){
            temp = temp-> next;
        }
        //aa gye curr pr
        
    }

}

int main(){
    Node* node1 = new Node;

    Node* tail = node1;

    insertNode(tail,1, 2);



    return 0;
}