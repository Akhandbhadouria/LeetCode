class Solution {
public:
    void dfs(TreeNode* root, string& s) {
        if (root == NULL)
            return;

        s += to_string(root->val);

        if (root->left) {
            s += '(';
            dfs(root->left, s);
            s += ')';
        }

        if (root->right) {
            if (!root->left)
                s += "()";

            s += '(';
            dfs(root->right, s);
            s += ')';
        }
    }

    string tree2str(TreeNode* root) {
        string s;
        dfs(root, s);
        return s;
    }
};