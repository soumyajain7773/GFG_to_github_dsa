/*
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        
        Node *temp = head;
        Node *newnode = new Node(x);
        if(head==NULL){
            return newnode;
        }
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = newnode;
        return head;
        
    }
};