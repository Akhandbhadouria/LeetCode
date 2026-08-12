class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
        for(int i=words.size()-1 ;i>0;i--){
            string s=words[i];
            string s1=words[i-1];
            sort(s.begin(),s.end());
            sort(s1.begin(),s1.end());
            if(s!=s1)ans.push_back(words[i]);

        }
        ans.push_back(words[0]);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};