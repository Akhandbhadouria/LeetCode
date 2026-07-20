class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
        if (points.empty()) return 0;
        sort(points.begin(), points.end());
        int cnt=1;
        int mi=points[0][0];
        int mx=mi+w;
        for(vector<int> p:points){
            int x=p[0];
            if(x>mx){
                cnt++;
                mi=x;
                mx=x+w;
            }
        }
        return cnt;
        
    }
};