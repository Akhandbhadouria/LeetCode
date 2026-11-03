class Solution(object):
    def sortedSquares(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        
        temp=[]
        for i in nums:
            temp.append(i*i)
        return sorted(temp)
        