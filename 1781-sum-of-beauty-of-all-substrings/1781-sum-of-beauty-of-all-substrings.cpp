class Solution {
public:

    int calculateBeauty(string sub) {
        int freq[26] = {0};

        // Count frequency
        for (char ch : sub) {
            freq[ch - 'a']++;
        }

        int maxFreq = 0;
        int minFreq = INT_MAX;

        // Find max and min frequency
        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0) {
                maxFreq = max(maxFreq, freq[i]);
                minFreq = min(minFreq, freq[i]);
            }
        }

        return maxFreq - minFreq;
    }


    int beautySum(string s) {
        int n = s.size();
        int ans = 0;

        // Generate every substring
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {

                string sub = s.substr(i, j - i + 1);

                // Immediately calculate beauty
                ans += calculateBeauty(sub);
            }
        }

        return ans;
    }
};