class Solution {
public:
vector<vector<int>> dir={{0,1},{1,0},{-1,0},{0,-1}};
bool solve(vector<vector<char>>& board, string word,int r,int c,int i){
    
    if(i==word.size())return true;
    if(r>=board.size() || c>=board[0].size() || r <0 || c < 0 || board[r][c]!=word[i])return false;

    char temp=board[r][c];
    board[r][c]='#';
    

    bool ans=false;
    for(auto& d:dir){
        int nr=r+d[0];
        int nc=c+d[1];
        if(solve(board,word,nr,nc,i+1)){
            ans=true;
            break;
        }

    }
board[r][c]=temp;
return ans;
}
    bool exist(vector<vector<char>>& board, string word) {
        if(word.size()<1)return false;
        bool res;
        string temp="";
        int r=board.size();
        int c=board[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
               
                   if(solve(board,word,i,j,0))return true;
                
            }
        }
        return false;
    }
};