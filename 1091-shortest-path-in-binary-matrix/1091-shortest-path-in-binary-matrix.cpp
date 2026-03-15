#include <vector>
#include <queue>
using namespace std;

class Solution {
public:

    vector<vector<int>> dir{
        {1,1},{1,-1},{-1,1},{-1,-1},
        {1,0},{0,1},{-1,0},{0,-1}
    };

    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {

        int n = grid.size();

        if(grid[0][0] == 1 || grid[n-1][n-1] == 1)
            return -1;

        priority_queue<
            pair<int,pair<int,int>>,
            vector<pair<int,pair<int,int>>>,
            greater<pair<int,pair<int,int>>>
        > pq;

        pq.push({1,{0,0}});

        vector<vector<int>> dist(n, vector<int>(n, 1e9));
        dist[0][0] = 1;

        while(!pq.empty()){

            auto top = pq.top();
            pq.pop();

            int d = top.first;
            int x = top.second.first;
            int y = top.second.second;

            if(x == n-1 && y == n-1)
                return d;

            for(auto &k : dir){

                int nx = x + k[0];
                int ny = y + k[1];

                if(nx>=0 && ny>=0 && nx<n && ny<n && grid[nx][ny]==0){

                    if(d + 1 < dist[nx][ny]){

                        dist[nx][ny] = d + 1;
                        pq.push({d+1,{nx,ny}});
                    }
                }
            }
        }

        return -1;
    }
};