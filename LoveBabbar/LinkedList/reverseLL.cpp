
class Solution {
public:
    Node* reverseList(Node* head) {
    Node* previous = NULL;
    Node* curr = head;

    while(curr != NULL){
        Node* forward = curr->next;
        curr->next = previous;
        previous = curr;
        curr = forward;
    }
    return previous;
    }
};

// recursive approach
void reverse(Node* &head, Node* curr, Node*previous){
    Node* forward = curr -> next;

    reverse(head, forward, curr);
    curr->next = previous;
}