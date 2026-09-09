class Solution(object):
    def countSeniors(self, details):
        """
        :type details: List[str]
        :rtype: int
        """
        cnt=0
        for det in details:
            c=det[11:13]
          
            num=int(c)
            if num > 60:
                cnt+=1
        return cnt
        