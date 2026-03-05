class Solution {
public:
    bool palindrome(string s, int st, int e) {

        while (st <= e) {
            if (s[st] != s[e])
                return false;

            st++;
            e--;
        }
        return true;
    }
    void solve(string s, vector<vector<string>>& res, vector<string>& curr,
               int i) {
        if (i == s.size()) {
            res.push_back(curr);
            return;
        }

        for (int j = i; j < s.size(); j++) {
            if (palindrome(s, i, j)) {
                curr.push_back(s.substr(i, j - i + 1));
                solve(s, res, curr, j + 1);
                curr.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        if (s.size() <= 0)
            return {};
        vector<vector<string>> res;
        vector<string> curr;
        solve(s, res, curr, 0);
        return res;
    }
};