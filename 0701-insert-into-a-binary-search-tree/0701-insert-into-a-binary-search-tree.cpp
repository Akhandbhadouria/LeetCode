/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* new_data = new TreeNode(val);

        if (root == nullptr) return new_data; // if tree empty

        TreeNode* curr = root;
        while (true) {
            if (val < curr->val) {
                if (curr->left == nullptr) {
                    curr->left = new_data;
                    break;
                }
                curr = curr->left;
            } else {
                if (curr->right == nullptr) {
                    curr->right = new_data;
                    break;
                }
                curr = curr->right;
            }
        }
        return root;
    }
};
