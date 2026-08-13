class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp1, temp2;

        sort(nums.begin(), nums.end());

        int mid = (n + 1) / 2;

        for (int i = 0; i < mid; i++) {
            temp1.push_back(nums[i]);
        }

        for (int i = n - 1; i >= mid; i--) {
            temp2.push_back(nums[i]);
        }

        int j = mid - 1;  
        int k = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                nums[i] = temp1[j--];
            } else {
                nums[i] = temp2[k++];
            }
        }
    }
};