class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ms=INT_MAX;
        int ans=0;
        for(int p:prices){
            if(ms>p){
                ms=p;
                continue;
            }
            int pro=p-ms;
            ans=max(ans,pro);
        }
        return ans;
    }
};