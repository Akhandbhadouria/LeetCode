class Solution {
public:
    void dfs(vector<int>& nums, int t, int n, int& ans, int i, int temp) {
        if (i == n) {
            if (temp == t) {
                ans++;
            }

            return;
        }
        int curr = temp;
        curr = curr += nums[i];
        dfs(nums, t, n, ans, i + 1, curr);
        int curr2 = temp;
        curr2 = curr2 -= nums[i];
        dfs(nums, t, n, ans, i + 1, curr2);
        return;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = 0;
        dfs(nums, target, n, ans, 0, 0);
        return ans;
    }
};