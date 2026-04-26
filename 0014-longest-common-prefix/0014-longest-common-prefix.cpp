class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            string temp = "";

            for (int j = 0; j < min(prefix.length(), strs[i].length()); j++) {
                if (prefix[j] == strs[i][j]) {
                    temp.push_back(prefix[j]);
                } else {
                    break;
                }
            }

            prefix = temp;

            if (prefix == "") {
                return "";
            }
        }

        return prefix;
    }
};