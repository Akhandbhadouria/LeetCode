class Solution {
public:
    int maxJump(vector<int>& s) {
        int ans=s[1]-s[0];
        for(int i=2;i<s.size();i++){
             ans=max(ans,s[i]-s[i-2]);
        }
        return ans;
    }
};