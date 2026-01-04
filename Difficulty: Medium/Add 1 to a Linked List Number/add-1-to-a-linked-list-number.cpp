/*

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
  
   Node *reverse(Node *head){
        Node *prev = NULL;
        Node *cur = head;
        Node *next = NULL;

        while(cur != NULL){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
    Node* addOne(Node* head) {
        if(head==NULL){
           Node *newnode=new Node(1);
           return newnode;
        }
        Node *temp=reverse(head);
        int carry=1;
        Node *newhead=NULL;
        Node *newtail=NULL;
        
        while(temp!=NULL){
            int sum = temp->data+carry;
            int d = sum%10;
            carry=sum/10;
            Node *newnode=new Node(d);
            if(newhead==NULL){
                newhead=newtail=newnode;
            }
            else{
                newtail->next=newnode;
                newtail=newnode;
            }
            temp=temp->next;
        }
        while(carry != 0){
            int digit = carry % 10;
            carry /= 10;

            Node *newnode = new Node(digit);
            newtail->next = newnode;
            newtail = newnode;
        }
        newhead=reverse(newhead);
        return newhead;
        
    }
};