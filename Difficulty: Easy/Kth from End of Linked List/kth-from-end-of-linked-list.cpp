/* Node Structure
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        
        Node *temp = head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(k>count){
            return -1;
        }
        temp=head;
        k=count-k;
        while(temp!=NULL&&k!=0){
            temp=temp->next;
            k--;
        }
        return (temp->data);
        
    }
};