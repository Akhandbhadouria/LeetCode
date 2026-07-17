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
int ans=0;
void  dfs(TreeNode* root,int cnt , bool left){
    if(root==NULL){
        return ;
    }
    ans=max(ans,cnt);
    if(left){
        dfs(root->right,cnt+1,!left);
        dfs(root->left, 1,true);
    }else{
        dfs(root->left,cnt+1,!left);
        dfs(root->right,1,false);
    }

}
    int longestZigZag(TreeNode* root) {
        dfs(root->left,1,true);
        dfs(root->right,1,false);
        return ans;
    }
};