class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        mp={}
        for x in range(len(nums)):
            diff=target-nums[x]
            if diff in mp:
                return [mp[diff],x]
            mp[nums[x]]=x