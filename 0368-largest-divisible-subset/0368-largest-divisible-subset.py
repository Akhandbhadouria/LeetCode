class Solution(object):
    def largestDivisibleSubset(self, nums):
        nums.sort()
        n = len(nums)
        dp = [1]*n
        pre_ind=[-1]*n
        
        ans_ind=0
        for i in range(n):
            for j in range(i):
                if nums[i] % nums[j] == 0 and dp[j] + 1 > dp[i]:
                    dp[i]=dp[j]+1
                    pre_ind[i]=j
            if dp[i]>dp[ans_ind]:
                ans_ind=i
        ans=[]       
        while ans_ind !=-1 :
            ans.append(nums[ans_ind])
            ans_ind=pre_ind[ans_ind]
        return ans[::-1]
