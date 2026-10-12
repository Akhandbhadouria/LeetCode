class Solution {
public:
    void dfs(int n, int o, int c, string& curr, vector<string>& ans) {
        if (curr.size() == n * 2) {
            ans.push_back(curr);
            return;
        }

        if (o < n) {
            curr.push_back('(');
            dfs(n, o + 1, c, curr, ans);
            curr.pop_back();
        }

        if (c < o) {
            curr.push_back(')');
            dfs(n, o, c + 1, curr, ans);
            curr.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string curr = "";
        dfs(n, 0, 0, curr, ans);
        return ans;
    }
};