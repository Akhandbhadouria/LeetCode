class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int minDist = INT_MAX;
        int ans = -1;

        for (int i = 0; i < points.size(); i++) {
            int x1 = points[i][0];
            int y1 = points[i][1];

            if (x1 == x || y1 == y) {
                int dis = abs(x - x1) + abs(y - y1);

                if (dis < minDist) {
                    minDist = dis;
                    ans = i;
                }
            }
        }

        return ans;
    }
};