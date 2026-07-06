class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int mini = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            int prefixSum = 0;
            for (int j = i; j < nums.size(); j++) {
                prefixSum += nums[j];
                if (j - i + 1 >= l && j - i + 1 <= r && prefixSum > 0) {
                    mini = min(mini, prefixSum);
                }
            }
        }
        return mini == INT_MAX ? -1 : mini;
    }
};