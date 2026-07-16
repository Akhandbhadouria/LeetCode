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
void check(TreeNode* root,int &cnt,int val){
    if(root==NULL)return;
    if(root->val>=val){
        cnt++;
        val=root->val;
        }
    if(root->left){
        check(root->left,cnt,val);
    }
    if(root->right){
        check(root->right,cnt,val);
    }
}
    int goodNodes(TreeNode* root) {
        if(root==NULL)return 0;
        if(!root->left && !root->right){
            return 1;
        }
        int cnt=0;
        check(root,cnt,root->val);
        return cnt;
    }
};