/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        Node *fack=new Node(-1);
        Node *t1=head1;
        Node *t2=head2;
        Node *temp=fack;
        
        while(t1!=NULL&&t2!=NULL){
            if((t1->data) <= (t2->data)){
                temp->next=t1;
                t1=t1->next;
            }
            else{
                temp->next=t2;
                t2=t2->next;
            }
             temp = temp->next;  
        }
        if(t1) temp->next = t1;
        if(t2) temp->next = t2;
        
        fack=fack->next;
        return fack;
    }
};