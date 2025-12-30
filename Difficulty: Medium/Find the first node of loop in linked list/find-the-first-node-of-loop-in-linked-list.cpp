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
    int cycleStart(Node* head) {
        // code here
        Node *slow=head;
        Node *fast=head;
        bool iscycle = false;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
               iscycle=true; 
               break;
            }
        }
        if(iscycle==false){
            return -1;
        }
        slow=head;
        while(slow!=fast){
           
            slow=slow->next;
            fast=fast->next;
        }
        return slow->data;
        
        
        
    }
};