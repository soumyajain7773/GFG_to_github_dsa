/* Structure of doubly linked list Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};*/
class Solution {
  public:
    vector<vector<int>> displayList(Node *head) {
        // code here
        Node *temp=head;
        vector<vector<int>> ans;
        vector<int> a1;
        vector<int> a2;
        while(temp!=NULL){
           a1.push_back(temp->data);
           temp=temp->next;
        }
        a2=a1;
        reverse(a2.begin(), a2.end());
        
        ans.push_back({a1});
        ans.push_back({a2});
        
        return ans;
        
        
    }
};