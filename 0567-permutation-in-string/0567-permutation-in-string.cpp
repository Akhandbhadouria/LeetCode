class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) {
            return false;
        }
        
        int n = s1.size();
        
        sort(s1.begin(), s1.end());
        
        for(int i = 0; i <= s2.size() - n; i++) {
            string t2 = s2.substr(i, n);
            sort(t2.begin(), t2.end());
            
            if(t2 == s1)
                return true;
        }
        
        return false;
    }
};