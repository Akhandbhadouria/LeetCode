class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,vector<int>& ni) {
        vector<vector<int>> res;
          for (vector<int> i : intervals) {
            if (i[0] > ni[1]) {
                res.push_back(ni);
                ni = i;
            } else if (i[1] < ni[0]) {
                res.push_back(i);
            } else {
                ni[0] = min(ni[0], i[0]);
                ni[1] = max(ni[1], i[1]);
            }
        }
        res.push_back(ni);return res;
    }
    
}

;