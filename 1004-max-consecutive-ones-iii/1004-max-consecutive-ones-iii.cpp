class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0;

        int cnt = 0;

        for (int i = 0; i < nums.size(); i++) {  
            if (nums[i] == 0) {
                k--;
            }

            while (k < 0) {
                if (nums[l] == 0) {
                    k++;
                }
                l++;
            }

            cnt = max(cnt, i - l + 1);  
        }

        return cnt;
    }
};