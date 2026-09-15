class Solution(object):
    def findClosestElements(self, arr, k, x):
        """
        :type arr: List[int]
        :type k: int
        :type x: int
        :rtype: List[int]
        """
        hp=[]
        for n in arr:
            heapq.heappush(hp,(abs(x-n),n))
        ans=[]
        for a in range(k):
            
            t=heapq.heappop(hp)
            ans.append(t[1])
        ans.sort()
        return ans
        