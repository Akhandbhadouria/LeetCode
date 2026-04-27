class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int, priority_queue<int, vector<int>, greater<int>>> mp;

        for (int num : nums) {
            if (mp.count(num - 1) && !mp[num - 1].empty()) {
                int len = mp[num - 1].top();
                mp[num - 1].pop();

                mp[num].push(len + 1);
            }
            else {
                mp[num].push(1);
            }
        }

        for (auto &x : mp) {
            while (!x.second.empty()) {
                if (x.second.top() < 3) {
                    return false;
                }
                x.second.pop();
            }
        }

        return true;
    }
};