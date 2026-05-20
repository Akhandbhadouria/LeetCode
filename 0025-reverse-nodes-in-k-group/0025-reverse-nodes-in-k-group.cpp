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
    ListNode* reverseKGroup(ListNode* head, int k) {
      if (head == NULL || k == 1) return head;
       ListNode* start=head;
       
       int i=0;
       while(i<k){
        if(start==NULL){
            return head;
        }
        start=start->next;
        i++;
       }
          ListNode* pre= reverseKGroup(start,k);
        int j=0;
          
              ListNode* curr=head;
                 ListNode* nx=NULL;
        while(j<k && curr){
           
            nx=curr->next;
            curr->next=pre;
            pre=curr;
            curr=nx;
         j++;
        }
        
        
      

       
        return pre;
    }
};