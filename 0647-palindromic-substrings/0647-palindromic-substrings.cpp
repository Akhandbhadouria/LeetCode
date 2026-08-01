class Solution {
public:
    bool palind(string s) {
        string ss = s;
        reverse(ss.begin(), ss.end());
        return s == ss;
    }
    int countSubstrings(string s) {
        int cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            for (int j = 0; j <= i; j++) {
                if (palind(s.substr(j, i - j+1))) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};