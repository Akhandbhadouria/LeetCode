class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n, -1);

        if (2 * k + 1 > n)
            return ans;

        vector<long long> sm(n);
        sm[0] = nums[0];

        for (int i = 1; i < n; i++)
            sm[i] = sm[i - 1] + nums[i];

        for (int j = k; j <= n - k - 1; j++) {
            int left = j - k;
            int right = j + k;

            long long sum = sm[right];
            if (left > 0)
                sum -= sm[left - 1];

            ans[j] = sum / (2 * k + 1);
        }

        return ans;
    }
};