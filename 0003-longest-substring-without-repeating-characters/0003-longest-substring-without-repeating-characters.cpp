class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;
        int left=0;
        int max_size=0;
        for(int i=0;i<s.size();i++){
            if(set.count(s[i])){
            while(set.count(s[i])){
                set.erase(s[left]);
                left++;
            }
              
            }
            
            set.insert(s[i]);
            max_size=max(max_size,(int)set.size());
        }
        return max_size;
    }
};