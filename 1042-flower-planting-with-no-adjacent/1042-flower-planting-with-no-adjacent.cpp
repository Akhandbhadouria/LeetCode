class Solution {
public:
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        
        vector<vector<int>> adj(n);
        
        for(auto &p : paths){
            int u = p[0] - 1;
            int v = p[1] - 1;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int> ans(n, 0);
        
        for(int i = 0; i < n; i++){
            bool used[5] = {false};
            
            for(int nei : adj[i]){
                used[ans[nei]] = true;
            }
            
            for(int flower = 1; flower <= 4; flower++){
                if(!used[flower]){
                    ans[i] = flower;
                    break;
                }
            }
        }
        
        return ans;
    }
};