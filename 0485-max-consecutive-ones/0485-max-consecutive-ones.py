class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        ans=0
        temp=0
        for i in range(0,len(nums)):
            if nums[i]==0:
                temp=0
            else:
                temp+=1
            ans=max(ans,temp)
        return ans

        