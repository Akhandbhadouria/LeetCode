class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        unordered_map<int, int> freq;
        long long ans = 0;
        int MOD = 1e9 + 7;

        for (int x : deliciousness) {
            for (int p = 1; p <= (1 << 21); p <<= 1) {
                int need = p - x;
                if (freq.count(need)) {
                    ans = (ans + freq[need]) % MOD;
                }
            }
            freq[x]++;
        }
        return ans;
    }
};