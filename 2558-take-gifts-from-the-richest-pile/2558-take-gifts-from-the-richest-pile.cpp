class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> heap(gifts.begin(), gifts.end());
        while (k > 0) {
            int a = heap.top();
            heap.pop();
            int nv = sqrt(a);
            heap.push(nv);
            k--;
        }

        long long ans = 0;
        while (!heap.empty()) {
            ans += heap.top();
            heap.pop();
        }
        return ans;
    }
};