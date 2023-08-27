#include<iostream>
using namespace std;

class  Node{
    public:
    int data;
    Node* next;
};

int main(){
    
    Node* node1 = new Node;
    Node* node2 = new Node;

    node1->data = 2;
    node1-> next = node2;
    node2->data = 3;
    node2-> next = node1;
    

    cout <<"Address of node1= "<<node1 << endl;
    cout << node1->data << endl;
    cout << node1->next << endl;
    
    cout <<"Address of node2= "<<node2 << endl;
    cout<< node2->data << endl;
    cout << node2->next << endl;

    return 0;
}