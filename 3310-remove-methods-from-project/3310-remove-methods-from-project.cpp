class Solution {
public:
void dfs(int k, vector<int>& vis,vector<vector<int>>& adj){
    vis[k]=1;
    for(int n:adj[k]){
        if(vis[n]==0){
            dfs(n,vis,adj);
        }

    }
    return;
}
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>> adj(n);
        for(vector<int> v:invocations){
            adj[v[0]].push_back(v[1]); 

        }
        vector<int> vis(n);
        dfs(k,vis,adj);

         for(vector<int> v:invocations){
            int i=v[0];
            int j=v[1];
            if(vis[i]==0 && vis[j]==1){
                vector<int> ans;
                for(int l=0;l<n;l++){
                    ans.push_back(l);
                }
                return ans;
            } 

        }
        vector<int> ans;
                for(int l=0;l<n;l++){
                    if(!vis[l]){
                       ans.push_back(l); 
                    }
                    
                }
                return ans;

    }
};