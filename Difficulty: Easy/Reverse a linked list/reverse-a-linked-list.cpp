/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = nullptr ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
       
       Node *prev = NULL;
       Node *cur = head;
       Node *temp = head;
       
       while(temp!=NULL){
           temp = temp->next;
           cur->next = prev;
           prev = cur;
           cur = temp;
       }
       
       return prev;
       
    }
};