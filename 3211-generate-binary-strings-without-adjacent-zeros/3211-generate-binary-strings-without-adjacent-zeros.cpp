class Solution {
public:
    void dfs(string s, int n, vector<string>& ans, char pre) {
        if (s.size() == n) {
            ans.push_back(s);
            return;
        }
        if (pre == '0') {
            dfs(s + '1', n, ans, '1');
        } else {
            dfs(s + '0', n, ans, '0');
            dfs(s + '1', n, ans, '1');
        }
        return;
    }
    vector<string> validStrings(int n) {
        vector<string> ans;
        string str;
        dfs(str, n, ans, '#');
        return ans;
    }
};