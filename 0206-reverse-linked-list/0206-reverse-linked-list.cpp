/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr=head;
        ListNode* f=NULL;
        ListNode* b=NULL;
        while(curr!=NULL){
            f=curr->next;
            
            curr->next=b;
            b=curr;
            curr=f;
        }
        return b;
    }
};