class Solution {
public:
    bool identical(TreeNode* r, TreeNode* s) {
        if (r == NULL || s == NULL) {
            return r == s; // Both must be NULL to be identical
        }
        return (r->val == s->val) &&
               identical(r->left, s->left) &&
               identical(r->right, s->right);
    }

    bool isSubtree(TreeNode* r, TreeNode* s) {
        if (r == NULL) return false; // Base case: r is exhausted

        if (r->val == s->val && identical(r, s)) {
            return true;
        }

        // Make sure to return the result of recursive calls
        return isSubtree(r->left, s) || isSubtree(r->right, s);
    }
};
