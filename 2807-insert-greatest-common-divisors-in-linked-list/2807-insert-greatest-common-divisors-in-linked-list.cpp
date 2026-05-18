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
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp =head;

        while(temp->next){
            ListNode* tem2=temp->next;
            int d=gcd(temp->val,tem2->val);
            ListNode* t=new ListNode(d);

            temp->next=t;
            t->next=tem2;
            temp=tem2;
        }
        return head;
    }
};