class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        if (s.size() < p.size()) return ans;

        vector<int> pFreq(26, 0), winFreq(26, 0);

        for (char c : p)
            pFreq[c - 'a']++;

        int k = p.size();

        for (int i = 0; i < k; i++)
            winFreq[s[i] - 'a']++;

        if (winFreq == pFreq)
            ans.push_back(0);

        for (int i = k; i < s.size(); i++) {
            winFreq[s[i] - 'a']++;
            winFreq[s[i - k] - 'a']--;

            if (winFreq == pFreq)
                ans.push_back(i - k + 1);
        }

        return ans;
    }
};