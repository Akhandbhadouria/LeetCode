class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int, int>,
                       vector<pair<int, int>>,
                       greater<pair<int, int>>> minHeap;

        for (int i = 0; i < nums.size(); i++) {
            minHeap.push({nums[i], i});
        }

        while (k--) {
            auto [val, idx] = minHeap.top();
            minHeap.pop();

            nums[idx] = val * multiplier;
            minHeap.push({nums[idx], idx});
        }

        return nums;
    }
};