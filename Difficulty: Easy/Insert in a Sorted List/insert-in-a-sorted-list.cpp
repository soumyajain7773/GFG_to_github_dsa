/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    // Should return head of the modified linked list
    Node* sortedInsert(Node* head, int key) {
        // Code here
        if(head==NULL){
            Node *newnode=new Node(key);
            return newnode;
        }
        Node *temp=head;
        
        if(temp->data>key){
            Node *newnode=new Node(key);
            newnode->next=temp;
            return newnode;
        }
        
        while(temp->next != NULL && temp->next->data < key){
            temp=temp->next;
        }
        Node *newnode=new Node(key);
        newnode->next=temp->next;
        temp->next=newnode;
        return head;
    }
};