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
void  dfs(TreeNode* r1,vector<int>& arr1){
    if(r1==NULL)return;
    if(r1->left==NULL && r1->right==NULL){
        arr1.push_back(r1->val);
        return;
    }
    dfs(r1->left,arr1);
    dfs(r1->right,arr1);
    return;
}
    bool leafSimilar(TreeNode* r1, TreeNode* r2) {
        vector<int> arr1;
        dfs(r1,arr1);
        vector<int> arr2;
        dfs(r2,arr2);
        return arr1==arr2;

    }
};