class Solution(object):
    def dfs(self, root):
        if root is None:
            return 0

        left = self.dfs(root.left)
        right = self.dfs(root.right)

        return 1 + max(left, right)

    def maxDepth(self, root):
        return self.dfs(root)