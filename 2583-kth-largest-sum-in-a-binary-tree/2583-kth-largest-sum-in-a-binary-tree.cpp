class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> temp;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int s = q.size();
            long long sum = 0;

            for (int i = 0; i < s; i++) {
                TreeNode* curr = q.front();
                q.pop();

                sum += curr->val;

                if (curr->left) {
                    q.push(curr->left);
                }

                if (curr->right) {
                    q.push(curr->right);
                }
            }

            temp.push_back(sum);
        }

        if (temp.size() < k)
            return -1;

        sort(temp.begin(), temp.end(), greater<long long>());

        return temp[k - 1];
    }
};