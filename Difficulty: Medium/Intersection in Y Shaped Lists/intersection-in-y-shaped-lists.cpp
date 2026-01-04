/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
  
    int length(Node* head1){
        Node *temp=head1;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
    Node* intersectPoint(Node* head1, Node* head2) {
       
       int l1=length(head1);
       int l2=length(head2);
       Node *temp1=head1;
       Node *temp2=head2;
       if(l1>l2){
           int d = l1-l2;
           for(int i=1;i<=d;i++){
               temp1=temp1->next;
           }
       }
       else{
           int d = l2-l1;
           for(int i=1;i<=d;i++){
               temp2=temp2->next;
           }
       }
       while(temp1!=temp2){
           temp1=temp1->next;
           temp2=temp2->next;
       }
       return temp1;
        
    }
};