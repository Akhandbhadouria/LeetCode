
class Solution {
public:
void dfs(vector<vector<int>>& grid, int i, int j,int& val) {
        int row = grid.size();
        int col = grid[0].size();

        if(i < 0 || j < 0 || i >= row || j >= col || grid[i][j] == 0)
            return;
        val+=grid[i][j];
        grid[i][j] = 0; 
        
        dfs(grid, i+1, j,val); 
        dfs(grid, i-1, j,val); 
        dfs(grid, i, j+1,val); 
        dfs(grid, i, j-1,val); 
    }

    int findMaxFish(vector<vector<int>>& grid) {
         int row = grid.size();
        int col = grid[0].size();
        int ans = 0;

        for(int i = 0; i < row; ++i) {
            for(int j = 0; j < col; ++j) {
                if(grid[i][j] != 0) {
                    int val=0;
                    dfs(grid, i, j,val);
                    ans=max(ans,val);
                }
            }
        }
        return ans;
    }
};