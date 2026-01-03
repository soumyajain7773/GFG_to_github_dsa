/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/

class Solution {
  public:
  
    Node *convert(vector<int>arr){
        Node *head=NULL;
        Node *tail=NULL;
        for(int i=0;i<arr.size();i++){
            Node *newnode = new Node(arr[i]);
            if(head==NULL){
                head=tail=newnode;
            }
            else{
                tail->bottom=newnode;
                tail=newnode;
            }
        }
        return head;
    }
  
    Node *flatten(Node *root) {
        if(root == NULL) return NULL;
        
        vector<int>arr; 
        Node *temp=root;
        
        while(temp!=NULL){
            Node *t2=temp;
            while(t2!=NULL){
                arr.push_back(t2->data);
                t2=t2->bottom;
            }
            temp=temp->next;
        }
        sort(arr.begin(),arr.end());
        
        return convert(arr);
        
    }
};