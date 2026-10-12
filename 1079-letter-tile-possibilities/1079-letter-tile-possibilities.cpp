class Solution {
public:
    void dfs(string& tiles, int& ans, vector<bool>& used) {
        for (int i = 0; i < tiles.size(); i++) {
            if (used[i]) continue;

            if (i > 0 && tiles[i] == tiles[i - 1] && !used[i - 1])
                continue;

            used[i] = true;
            ans++;

            dfs(tiles, ans, used);

            used[i] = false;
        }
    }

    int numTilePossibilities(string tiles) {
        sort(tiles.begin(), tiles.end());

        int ans = 0;
        vector<bool> used(tiles.size(), false);

        dfs(tiles, ans, used);

        return ans;
    }
};