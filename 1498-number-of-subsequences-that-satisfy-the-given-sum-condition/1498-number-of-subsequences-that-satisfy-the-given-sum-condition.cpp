class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        
        int mod = 1e9 + 7;
        int n = nums.size();
        int i = 0, j = n - 1;
        long long ans = 0;

        vector<long long> power(n);
        power[0] = 1;

        for(int k = 1; k < n; k++)
            power[k] = (power[k-1] * 2) % mod;

        while(i <= j){
            if(nums[i] + nums[j] <= target){
                ans = (ans + power[j - i]) % mod;
                i++;
            }
            else{
                j--;
            }
        }

        return ans;
    }
};