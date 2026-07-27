class Solution {
public:
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {

        unordered_set<int> res(restricted.begin(), restricted.end());

        vector<vector<int>> adj(n);

        for (auto &edge : edges) {
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<bool> vis(n, false);

        queue<int> q;
        q.push(0);
        vis[0] = true;

        int ans = 0;

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            ans++;

            for (int neigh : adj[node]) {
                if (!vis[neigh] && res.find(neigh) == res.end()) {
                    vis[neigh] = true;
                    q.push(neigh);
                }
            }
        }

        return ans;
    }
};