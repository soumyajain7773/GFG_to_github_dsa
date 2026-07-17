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
    Node* deleteNode(Node* head, int x) {
        if (x == 1) {
            Node *temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        Node *temp=head;
        while(temp!=NULL&&x>2){
            temp=temp->next;
            x--;
        }
        if(temp->next==NULL||temp==NULL){
            return head;
        }
        Node *delete_node = temp->next;
        temp->next=temp->next->next;
        delete delete_node;
        
        return head;
        
    }
};