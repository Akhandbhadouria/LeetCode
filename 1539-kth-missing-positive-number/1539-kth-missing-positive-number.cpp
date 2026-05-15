class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_set<int> st(arr.begin(), arr.end());

        int cnt = 0;
        int n = 1;

        while (true) {
            if (st.find(n) == st.end()) {
                cnt++;
                if (cnt == k) {
                    return n;
                }
            }
            n++;
        }
    }
};