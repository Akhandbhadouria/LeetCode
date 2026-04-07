class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int> res;
int u=0;
        int row=mat.size();
        int col=mat[0].size();
        int sr=0,sc=0;
        int ec=col-1,er=row-1;
        while (sr<=er && sc<=ec){

            for(int j=sc;j<=ec;j++){
                res.push_back(mat[sr][j]);
             
            }
            for(int j=sr+1;j<=er;j++){
                res.push_back(mat[j][ec]);
             
            }
            for(int j=ec-1;j>=sc;j--){
                if(sr==er){
                    break;
                }
                res.push_back(mat[er][j]);
             
            }
            for(int j=er-1;j>=sr+1;j--){
                if(sc==ec){
                    break;
                }
               res.push_back(mat[j][sc]);

            }
            sr++;
            sc++;
            er--;
            ec--;
        }
        return res;

    }
};