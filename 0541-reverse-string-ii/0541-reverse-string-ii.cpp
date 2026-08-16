class Solution {
public:
    string reverseStr(string s, int k) {
        int a = s.size();
        string ans = "";
        bool turn = true;

        for (int i = 0; i < a; i += k) {
            int len = min(k, a - i);

            string s1 = s.substr(i, len);

            if (turn) {
                reverse(s1.begin(), s1.end());
            }

            ans += s1;
            turn = !turn;
        }

        return ans;
    }
};