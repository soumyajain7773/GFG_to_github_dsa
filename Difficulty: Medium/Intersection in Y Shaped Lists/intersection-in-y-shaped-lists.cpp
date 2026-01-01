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
    Node* intersectPoint(Node* head1, Node* head2) {
        //  Code Here
        unordered_set<Node*> st;

        // store addresses of first list
        Node* temp = head1;
        while (temp != NULL) {
            st.insert(temp);
            temp = temp->next;
        }

        // check in second list
        temp = head2;
        while (temp != NULL) {
            if (st.find(temp) != st.end()) {
                return temp;   // intersection point
            }
            temp = temp->next;
        }

        return NULL;
    }
};