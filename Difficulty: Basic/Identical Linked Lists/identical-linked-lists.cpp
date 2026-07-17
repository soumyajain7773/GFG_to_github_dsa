/* Strucutre of a Node in linked list
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
    bool areIdentical(Node *head1, Node *head2) {
        
        Node *temp1 = head1;
        Node *temp2 = head2;
        int count1=0,count2=0;
        
        while(temp1!=NULL){
            count1++;
            temp1=temp1->next;
        }
        
        while(temp2!=NULL){
            count2++;
            temp2=temp2->next;
        }
        
        if(count1!=count2){
            return false;
        }
        temp1=head1;
        temp2=head2;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->data!=temp2->data){
                return false;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return true;
    }
};