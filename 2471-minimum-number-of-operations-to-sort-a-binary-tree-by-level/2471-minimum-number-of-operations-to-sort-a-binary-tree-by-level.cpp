class Solution {
public:

    int cnt_s(vector<int> arr) {
        int cnt = 0;
        int n = arr.size();

        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++) {
            v.push_back({arr[i], i});
        }

        sort(v.begin(), v.end());

        vector<bool> visited(n, false);

        for (int i = 0; i < n; i++) {

            if (visited[i] || v[i].second == i)
                continue;

            int cycle = 0;
            int j = i;

            while (!visited[j]) {
                visited[j] = true;
                j = v[j].second;
                cycle++;
            }

            cnt += cycle - 1;
        }

        return cnt;
    }

    int minimumOperations(TreeNode* root) {

        int ans = 0;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {

            int s = q.size();
            vector<int> arr;

            for (int i = 0; i < s; i++) {

                TreeNode* temp = q.front();
                q.pop();

                arr.push_back(temp->val);

                if (temp->left)
                    q.push(temp->left);

                if (temp->right)
                    q.push(temp->right);
            }

            ans += cnt_s(arr);
        }

        return ans;
    }
};