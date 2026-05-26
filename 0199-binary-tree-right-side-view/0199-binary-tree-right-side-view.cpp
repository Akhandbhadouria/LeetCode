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
    vector<int> rightSideView(TreeNode* root) {
        if (root == nullptr) return {}; 
        queue<pair<TreeNode*,int>> q;
        map<int,int> m;
        q.push({root,0});
        
        while(!q.empty()){
            TreeNode* curr=q.front().first;
            int d=q.front().second;
            q.pop();
            if(m.find(d)==m.end()){
                m[d]=curr->val;
            }
            if(curr->right){
                q.push({curr->right,d+1});
            }
            if(curr->left){
                q.push({curr->left,d+1});
            }
        }
        vector<int> res;
        for(auto data:m){
            res.push_back(data.second);
        }
        return res;
    }
};