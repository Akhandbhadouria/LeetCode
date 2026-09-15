class Solution(object):
    def checkInclusion(self, s1, s2):
        """
        :type s1: str
        :type s2: str
        :rtype: bool
        """
        ws=len(s1)
        s1=''.join(sorted(s1))
        for i in range(len(s2) - ws + 1):
            if i+ws <= len(s2):
                temp=s2[i:i+ws]
                temp=''.join(sorted(temp))
                if temp==s1:
                    return True
            else:
                break
        return False
        