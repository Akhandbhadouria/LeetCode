class Solution {
public:

vector<vector<int>> dir={{1,0},{-1,0},{0,1},{0,-1}};
int ans=0;

void dfs(vector<vector<int>>& grid,int i,int j,int sum){

    int gold = grid[i][j];
    sum += gold;

    ans = max(ans,sum);

    grid[i][j] = 0; // mark visited

    for(auto &d:dir){

        int ni=i+d[0];
        int nj=j+d[1];

        if(ni>=0 && nj>=0 && ni<grid.size() && nj<grid[0].size() && grid[ni][nj]!=0){
            dfs(grid,ni,nj,sum);
        }
    }

    grid[i][j] = gold; // backtrack
}

int getMaximumGold(vector<vector<int>>& grid) {

    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){

            if(grid[i][j]!=0){
                dfs(grid,i,j,0);
            }
        }
    }

    return ans;
}

};