class Solution {
public:
    int maximumLength(string s) {
        unordered_map<string, int> mp;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            string cur = "";

            for (int j = i; j < n; j++) {
                if (s[j] != s[i]) break;   

                cur += s[j];
                mp[cur]++;
            }
        }

        int ans = -1;

        for (auto &m : mp) {
            if (m.second >= 3)
                ans = max(ans, (int)m.first.size());
        }

        return ans;
    }
};