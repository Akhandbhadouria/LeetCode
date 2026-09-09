class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        temp=s.split(" ")
        i=len(temp)-1
        while len(temp[i]) == 0:
            i-=1
        return(len(temp[i]))
        