/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == NULL)
            return {};

        queue<TreeNode*> que;
        que.push(root);
        while (!que.empty()) {
            int s = que.size();
            vector<int> curr;
            for (int i = 0; i < s; i++) {
                TreeNode* node=que.front();
                curr.push_back(node->val);
                que.pop();

               
                if (node->left != NULL)que.push(node->left);
                if (node->right != NULL)que.push(node->right);
            }
             res.push_back(curr);
        }
        return res; 
    }
};