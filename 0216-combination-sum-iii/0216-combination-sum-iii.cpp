class Solution {
public:
vector<int> cnt={1,2,3,4,5,6,7,8,9};
void dfs(int k,int n,int ind,int cs, vector<int>& curr,vector<vector<int>>& ans){
    if(curr.size()==k && cs==n){
        ans.push_back(curr);
        return;
    }
    if(ind>=cnt.size())return;
    curr.push_back(cnt[ind]);
    cs+=cnt[ind];
    dfs(k,n,ind+1,cs,curr,ans);
    curr.pop_back();
    cs-=cnt[ind];
    dfs(k,n,ind+1,cs,curr,ans);
    return;
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> curr;
        vector<vector<int>> ans;
        
        dfs(k,n,0,0,curr,ans);
        return ans;
    }
};