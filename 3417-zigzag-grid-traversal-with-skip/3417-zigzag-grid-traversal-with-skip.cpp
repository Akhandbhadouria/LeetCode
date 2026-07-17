class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        int r = grid.size();
        int col = grid[0].size();
        vector<int> ans;
        bool turn = true;
        for (vector<int> v : grid) {

            if (turn) {
                for (int i = 0; i < v.size(); i += 2) {
                    ans.push_back(v[i]);
                }
                turn = false;
            } else {
                if (v.size() % 2 == 0) {
                    for (int i = v.size() - 1; i >= 0; i -= 2) {
                        ans.push_back(v[i]);
                    }

                }else{
                    for(int i=v.size()-2;i>=0;i-=2){
                    ans.push_back(v[i]);
                }
                }

                turn = true;
            }
        }
        return ans;
    }
};