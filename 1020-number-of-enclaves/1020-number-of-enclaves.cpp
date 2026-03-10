class Solution {
public:
    vector<pair<int,int>> dir={{1,0},{0,1},{-1,0},{0,-1}};
    
    void dfs(int i,int j,vector<vector<int>>& board){
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j]!=1){
            return;
        }
        
        board[i][j]=2;
        
        for(auto d:dir){
            dfs(i+d.first,j+d.second,board);
        }
    }

    int numEnclaves(vector<vector<int>>& board) {
        int row=board.size();
        int col=board[0].size();
        
        for(int i=0;i<row;i++){
            if(board[i][0]==1) dfs(i,0,board);
            if(board[i][col-1]==1) dfs(i,col-1,board);
        }
        
        for(int i=0;i<col;i++){
            if(board[0][i]==1) dfs(0,i,board);
            if(board[row-1][i]==1) dfs(row-1,i,board);
        }
        
        int ans=0;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(board[i][j]==1){
                    ans++;
                }
            }
        }
        
        return ans;
    }
};