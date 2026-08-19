class Solution {
public:
    string largestNumber(vector<int>& nums) {

        vector<string> strNums;

        for (int num : nums) {
            strNums.push_back(to_string(num));
        }

        sort(strNums.begin(), strNums.end(),
            [](const string& a, const string& b) {
                return a + b > b + a;
            });

        string ans = "";

        for (string s : strNums) {
            ans += s;
        }

        if (ans[0] == '0')
            return "0";

        return ans;
    }
};