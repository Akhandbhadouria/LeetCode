class Solution {
public:
    int pairSum(ListNode* head) {
        unordered_map<int, int> mp;

        int ind = 0;
        ListNode* temp = head;

        while (temp) {
            mp[ind] = temp->val;
            ind++;
            temp = temp->next;
        }

        int cnt = ind;
        int ans = INT_MIN;

        for (int i = 0; i < cnt / 2; i++) {
            ans = max(ans, mp[i] + mp[cnt - 1 - i]);
        }

        return ans;
    }
};