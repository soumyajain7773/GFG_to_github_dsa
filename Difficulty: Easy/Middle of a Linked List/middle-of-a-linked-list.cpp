/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        // code here
        int count=0;
        Node *temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int mid = count/2;
        temp=head;
        while(temp!=NULL&&mid!=0){
            temp=temp->next;
            mid--;
        }
        return (temp->data);
    }
};