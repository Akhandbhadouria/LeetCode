class Solution {
public:
    int minExtraChar(string s, vector<string>& d) {
        unordered_set<string> st(d.begin(),d.end());
        vector<int> dp(s.size()+1,0);

        for(int i=s.size()-1;i>=0;i--){
            dp[i]=1+dp[i+1];
            for(int j=i;j<s.size();j++){
                if(st.count(s.substr(i,j-i+1))){
                    dp[i]=min(dp[i],dp[j+1]);
                }
            }
            
        }
return dp[0];
    }
};