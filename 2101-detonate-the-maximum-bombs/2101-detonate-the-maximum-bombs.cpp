class Solution {
public:

    // function to check if bomb i can detonate bomb j
    bool canDetonate(vector<int>& a, vector<int>& b){
        long long dx = (long long)a[0] - b[0];
        long long dy = (long long)a[1] - b[1];
        long long r = (long long)a[2];

        return (dx*dx + dy*dy) <= r*r;
    }

    int dfs(int start, vector<vector<int>>& bombs){
        int n = bombs.size();

        vector<int> vis(n,0);
        queue<int> q;

        q.push(start);
        vis[start] = 1;

        int count = 1;

        while(!q.empty()){
            int cur = q.front();
            q.pop();

            for(int i=0;i<n;i++){
                if(!vis[i] && canDetonate(bombs[cur], bombs[i])){
                    vis[i] = 1;
                    q.push(i);
                    count++;
                }
            }
        }

        return count;
    }

    int maximumDetonation(vector<vector<int>>& bombs) {
        int n = bombs.size();
        int ans = 1;

        for(int i=0;i<n;i++){
            ans = max(ans, dfs(i, bombs));
        }

        return ans;
    }
};