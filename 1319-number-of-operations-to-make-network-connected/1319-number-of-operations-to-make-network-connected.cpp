#include <vector>
using namespace std;

class Solution {
public:

    void dfs(int node, vector<vector<int>>& adj, vector<int>& visited) {
        visited[node] = 1;

        for(int neighbor : adj[node]) {
            if(!visited[neighbor]) {
                dfs(neighbor, adj, visited);
            }
        }
    }

    int makeConnected(int n, vector<vector<int>>& connections) {

        if(connections.size() < n - 1)
            return -1;

        vector<vector<int>> adj(n);

        for(auto &c : connections) {
            adj[c[0]].push_back(c[1]);
            adj[c[1]].push_back(c[0]);
        }

        vector<int> visited(n,0);
        int components = 0;

        for(int i=0;i<n;i++) {
            if(!visited[i]) {
                dfs(i, adj, visited);
                components++;
            }
        }

        return components - 1;
    }
};