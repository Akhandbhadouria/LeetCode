/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
                if (!head) return nullptr;

       Node* curr=head;
       while(curr){
            Node* new_node= new Node(curr->val);
            new_node->next=curr->next;
            curr->next=new_node;
            curr=new_node->next;
       }
      curr = head;
        while (curr) {
            if (curr->random) {
                curr->next->random = curr->random->next;
            } else {
                curr->next->random = nullptr;
            }
            curr = curr->next->next;
        }

       Node* dummy = new Node(0);
        Node* new_curr = dummy;
        curr = head;
        while (curr) {
            Node* temp=curr->next;
           new_curr->next=temp;
           new_curr=temp;
           curr->next=temp->next;

           curr=curr->next;
        }

        return dummy->next;
    }
};