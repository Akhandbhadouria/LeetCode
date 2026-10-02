class Solution {
public:

    unordered_map<int, vector<pair<int,int>>> mp;

    TreeNode* buildTree(int val) {

        TreeNode* node = new TreeNode(val);

        for (auto p : mp[val]) {

            int child = p.first;
            int isLeft = p.second;

            if (isLeft == 1)
                node->left = buildTree(child);
            else
                node->right = buildTree(child);
        }

        return node;
    }

    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {

        unordered_set<int> children;

        for (auto v : descriptions) {
            mp[v[0]].push_back({v[1], v[2]});
            children.insert(v[1]);
        }

        int root;

        for (auto v : descriptions) {
            if (children.find(v[0]) == children.end()) {
                root = v[0];
                break;
            }
        }

        return buildTree(root);
    }
};