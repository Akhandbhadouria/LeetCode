class Solution(object):
    def dfs(self,nums,ans,ind,curr):
        if ind==len(nums):
            ans.append(curr[:])
            return
        curr.append(nums[ind])
        self.dfs(nums,ans,ind+1,curr)
        curr.pop()
        self.dfs(nums,ans,ind+1,curr)


    def subsets(self, nums):
        
        ans=[]
        curr=[]
        self.dfs(nums,ans,0,curr)
        return ans
        