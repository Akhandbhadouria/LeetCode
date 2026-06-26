class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels = {
            'a', 'e', 'i', 'o', 'u',
            'A', 'E', 'I', 'O', 'U'
        };

        int l = 0;
        int r = s.length() - 1;

        while (l < r) {
            if (vowels.count(s[l]) && vowels.count(s[r])) {
                swap(s[l], s[r]);
                l++;
                r--;
            }
            else if (!vowels.count(s[l])) {
                l++;
            }
            else {
                r--;
            }
        }

        return s;
    }
};